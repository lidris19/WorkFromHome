/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:16:41 by lidris            #+#    #+#             */
/*   Updated: 2023/02/11 13:24:59 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush_line(char char1, char char2, char char3, int x)
{
	ft_putchar(char1);
	while (--x > 0)
	{
		if (x == 1)
			ft_putchar(char3);
		else
			ft_putchar(char2);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y < 1 || x < 1)
		return ;
	rush_line('/', '*', '\\', x);
	if (--y == 0)
		return ;
	while (y-- > 1)
		rush_line('*', ' ', '*', x);
	rush_line('\\', '*', '/', x);
}
