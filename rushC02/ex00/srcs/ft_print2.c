/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:54:13 by lidris            #+#    #+#             */
/*   Updated: 2023/02/26 17:48:01 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	find_write(long long nbr, struct t_entry *dict)
{
	int	i;

	i = 0;
	while (dict[i].end != 1)
	{
		if (dict[i].nbr == nbr)
			write(1, dict[i].word, ft_strlen(dict[i].word));
		i++;
	}
}

void	ft_print(long long nbr, struct t_entry *dict)
{
	print_billions(nbr, dict);
	print_millions(nbr, dict);
	print_thousands(nbr, dict);
	print_hundreds(nbr, dict);
	print_units(nbr, dict);
	write(1, "\n", 1);
}
