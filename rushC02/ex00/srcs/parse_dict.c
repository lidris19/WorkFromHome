/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 08:24:12 by vvalet            #+#    #+#             */
/*   Updated: 2023/02/26 21:13:48 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct t_entry	*parse_dict(char *file)
{
	char			*buffer;
	struct t_entry	*dict;
	int				entries;

	buffer = store_dict(file);
	if (buffer == NULL)
		return (NULL);
	entries = get_number_of_entries(buffer);
	dict = malloc((entries + 1) * sizeof(struct t_entry));
	if (dict == NULL)
	{
		free(buffer);
		return (NULL);
	}
	dict = f_ntry(buffer, dict, 0, 0);
	free(buffer);
	return (dict);
}

int	b_ntry(char *buffer, struct t_entry *dict, int entry, int pos)
{
	dict[entry].nbr = ft_atoi_dict(&buffer[pos]);
	while (is_digit(buffer[pos]) == 1
		|| is_space(buffer[pos]) == 1 || buffer[pos] == ':')
		pos++;
	dict[entry].word = ft_find_word(&buffer[pos]);
	if (dict[entry].word == NULL)
	{
		dict[entry].end = 1;
		ft_free_pointers(dict);
		return (-1);
	}
	while (buffer[pos] != '\n' && buffer[pos] != '\0')
		pos++;
	dict[entry].end = 0;
	return (pos);
}

struct t_entry	*f_ntry(char *buffer, struct t_entry *dict, int entry, int pos)
{
	while (buffer[pos])
	{
		while (buffer[pos] == '\n')
			pos++;
		if (is_valid_input(&buffer[pos]) == 1)
		{
			pos = b_ntry(buffer, dict, entry, pos);
			if (pos == -1)
				return (NULL);
			entry++;
		}
		else
		{
			dict[entry].end = 1;
			ft_free_pointers(dict);
			return (NULL);
		}
		pos++;
	}
	dict[entry].end = 1;
	return (dict);
}

int	get_number_of_entries(const char *buffer)
{
	int	entries;
	int	i;

	entries = 1;
	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			entries++;
		i++;
	}
	return (entries);
}
