/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: declerbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:17:18 by declerbo          #+#    #+#             */
/*   Updated: 2023/02/11 13:27:31 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char first_ch, char middle_ch, char last_ch)
{
	ft_putchar(first_ch);
	while (--x > 0)
	{
		if (x != 1)
		{
			ft_putchar(middle_ch);
		}
		else
		{
			ft_putchar(last_ch);
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		line(x, 'A', 'B', 'C');
		while (--y > 0)
		{
			if (y != 1)
			{
				line(x, 'B', ' ', 'B');
			}
			else
			{
				line(x, 'A', 'B', 'C');
			}
		}
	}
}
