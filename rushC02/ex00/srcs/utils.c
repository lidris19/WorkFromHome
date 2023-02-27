/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:37:40 by lidris            #+#    #+#             */
/*   Updated: 2023/02/26 21:31:17 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long long	ft_atoi(char *str)
{
	long long	value;
	int			i;

	if (!str)
		return (-1);
	i = 0;
	value = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		value = (value * 10) + (str[i] - '0');
		if (value > 4294967295)
			return (-1);
		i++;
	}
	return (value);
}

long long	ft_atoi_dict(char *str)
{
	long long	value;
	int			i;

	i = 0;
	value = 0;
	while (is_digit(str[i]) == 1)
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (value);
}

char	*ft_find_word(char *str)
{
	int		i;
	int		size;
	char	*p;

	i = 0;
	size = 0;
	while (str[size] != '\n' && str[size] != '\0')
			size++;
	p = malloc((size + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

void	ft_free_pointers(struct t_entry *dict)
{
	int	i;

	i = 0;
	if (dict == NULL)
		return ;
	while (dict[i].end != 1)
	{
		free(dict[i].word);
		i++;
	}
	free(dict);
}
