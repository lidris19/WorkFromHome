/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:13:58 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 17:15:59 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	backtracking(int ***matrix, int index, int *input)
{
	int	val;

	if (index == 16 && is_valid_solution(matrix, input))
	{
		return (1);
	}
	if (index < 16)
	{
		val = 1;
		while (val < 5)
		{
			if (is_valid_value(matrix, index, val))
			{
				matrix[1][index / 4][index % 4] = val;
				if (backtracking(matrix, index + 1, input))
				{
					return (1);
				}
			}
			val++;
		}
	}
	return (0);
}
