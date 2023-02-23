/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaffeo <ymaffeo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 08:48:38 by ymaffeo           #+#    #+#             */
/*   Updated: 2023/02/11 13:27:44 by lidris           ###   ########.fr       */
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
	rush_line('A', 'B', 'C', x);
	if (--y == 0)
		return ;
	while (y-- > 1)
		rush_line('B', ' ', 'B', x);
	rush_line('C', 'B', 'A', x);
}
