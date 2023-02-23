/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:03:17 by lidris            #+#    #+#             */
/*   Updated: 2023/02/12 16:46:59 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_last_combination(int d_total, int d_first, int d_second)
{
	return (d_total == 2 && d_first == 8 && d_second == 9);
}

void	print_combination(int d_total, int d_first, int d_second, int number)
{
	if (number == d_total)
	{
		ft_putchar(d_first + '0');
		ft_putchar(d_second + '0');
		while (number < d_total)
		{
			ft_putchar(d_second + 1 + '0');
			d_second++;
			number++;
		}
		if (!is_last_combination(d_total, d_first, d_second))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	print_combination(d_total, d_first, d_second, number + 1);
	print_combination(d_total, d_first, d_second + 1, number + 1);
}

void	ft_print_combn(int n)
{
	int	d_first;
	int	d_second;

	if (n <= 0 || n > 9)
		return ;
	d_first = 0;
	while (d_first < 10)
	{
		d_second = d_first + 1;
		while (d_second < 10)
		{
			print_combination(n, d_first, d_second, 2);
			d_second++;
		}
		d_first++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
