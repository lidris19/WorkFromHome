/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:15:48 by lidris            #+#    #+#             */
/*   Updated: 2023/02/15 11:05:14 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	static char	hex[] = "0123456789abcdef";

	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[(*str / 16) % 16]);
			ft_putchar(hex[*str % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
