/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fails.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:53:42 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 16:59:17 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	fail_col_top(int ***matrix, int col, int *input)
{
	int	i;
	int	height;
	int	out_of_sight;

	height = 0;
	i = 0;
	out_of_sight = input[col];
	while (i < 4)
	{
		if (matrix[1][i][col] > height)
		{
			height = matrix[1][i][col];
			out_of_sight--;
		}
		i++;
	}
	if (out_of_sight != 0)
		return (1);
	return (0);
}

int	fail_col_bot(int ***matrix, int col, int *input)
{
	int	i;
	int	height;
	int	out_of_sight;

	height = 0;
	i = 3;
	out_of_sight = input[col + 4];
	while (i >= 0)
	{
		if (matrix[1][i][col] > height)
		{
			height = matrix[1][i][col];
			out_of_sight--;
		}
		i--;
	}
	if (out_of_sight != 0)
		return (1);
	return (0);
}

int	fail_row_left(int ***matrix, int row, int *input)
{
	int	i;
	int	height;
	int	out_of_sight;

	height = 0;
	i = 0;
	out_of_sight = input[row + 8];
	while (i < 4)
	{
		if (matrix[1][row][i] > height)
		{
			height = matrix[1][row][i];
			out_of_sight--;
		}
		i++;
	}
	if (out_of_sight != 0)
		return (1);
	return (0);
}

int	fail_row_right(int ***matrix, int row, int *input)
{
	int	i;
	int	height;
	int	out_of_sight;

	height = 0;
	i = 3;
	out_of_sight = input[row + 12];
	while (i >= 0)
	{
		if (matrix[1][row][i] > height)
		{
			height = matrix[1][row][i];
			out_of_sight--;
		}
		i--;
	}
	if (out_of_sight != 0)
		return (1);
	return (0);
}
