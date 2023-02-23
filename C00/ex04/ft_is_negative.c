/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:10:23 by lidris            #+#    #+#             */
/*   Updated: 2023/02/12 14:22:20 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int number)
{
	if (number < 0)
		write(1, "N", 1);
	else if (number > '0')
		write(1, "P", 1);
	else
		write(1, "P", 1);
}
/*
int	main(void)
{
	int	number;

	number = -1;
	ft_is_negative (number);
	return (0);
}
*/
