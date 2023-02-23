/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:39:54 by lidris            #+#    #+#             */
/*   Updated: 2023/02/13 17:18:18 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	result_div;
	int	result_mod;

	x = 42;
	y = 6;
	ft_div_mod(x, y, &result_div, &result_mod);
	printf("%d divided by %d is :\n", x, y);
	printf("%d with a remainder of %d.\n", result_div, result_mod);
	return (0);
}
*/
