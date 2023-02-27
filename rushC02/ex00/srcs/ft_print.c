/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:48:33 by vvalet            #+#    #+#             */
/*   Updated: 2023/02/26 17:46:55 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_units(long long nbr, struct t_entry *dict)
{
	if (nbr > 0 && nbr % 100 == 0)
		return ;
	if (nbr > 99 && nbr % 100 != 0)
		write (1, " ", 1);
	nbr = nbr % 100;
	if (nbr < 21)
		find_write(nbr, dict);
	else
	{
		find_write((nbr - (nbr % 10)), dict);
		if ((nbr % 10) != 0)
		{
			write(1, " ", 1);
			find_write((nbr % 10), dict);
		}
	}
}

void	print_hundreds(long long nbr, struct t_entry *dict)
{
	if ((nbr % 1000) / 100 != 0)
	{
		if ((nbr / 1000) > 0)
			write(1, " ", 1);
		nbr = (nbr % 1000) / 100;
		find_write(nbr, dict);
		write(1, " ", 1);
		find_write(100, dict);
	}
}

void	print_thousands(long long nbr, struct t_entry *dict)
{
	if ((nbr % 1000000) / 1000 != 0)
	{
		if ((nbr / 1000000) > 0)
			write(1, " ", 1);
		nbr = (nbr % 1000000) / 1000;
		print_hundreds(nbr, dict);
		print_units(nbr, dict);
		write(1, " ", 1);
		find_write(1000, dict);
	}
}

void	print_millions(long long nbr, struct t_entry *dict)
{
	if ((nbr % 1000000000) / 1000000 != 0)
	{
		if ((nbr / 1000000000) > 0)
			write(1, " ", 1);
		nbr = (nbr % 1000000000) / 1000000;
		print_hundreds(nbr, dict);
		print_units(nbr, dict);
		write(1, " ", 1);
		find_write(1000000, dict);
	}
}

void	print_billions(long long nbr, struct t_entry *dict)
{
	nbr = nbr / 1000000000;
	if (nbr == 0)
		return ;
	print_hundreds(nbr, dict);
	print_units(nbr, dict);
	write(1, " ", 1);
	find_write(1000000000, dict);
}
