/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:24:18 by lidris            #+#    #+#             */
/*   Updated: 2023/02/13 17:22:54 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 42;
	y = 6;
	ft_ultimate_div_mod(&x, &y);
	printf("%d divided by %d is %d with a remainder of %d.\n", 42, 6, x, y);
	return (0);
}
*/
