/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:14:59 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 16:36:18 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	row_check(int ***matrix, int index, int val)
{
	while (index % 4 != 0)
	{
		index--;
		if (matrix[1][index / 4][index % 4] == val)
			return (0);
	}
	return (1);
}

int	col_check(int ***matrix, int index, int val)
{
	while (index / 4 != 0)
	{
		index -= 4;
		if (matrix[1][index / 4][index % 4] == val)
		{
			return (0);
		}
	}
	return (1);
}

int	is_valid_value(int ***matrix, int index, int val)
{
	if (row_check(matrix, index, val) && col_check(matrix, index, val))
		return (1);
	return (0);
}

int	is_valid_solution(int ***matrix, int *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (fail_col_top(matrix, i, input) || fail_col_bot(matrix, i, input)
			|| fail_row_left(matrix, i, input)
			|| fail_row_right(matrix, i, input))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
