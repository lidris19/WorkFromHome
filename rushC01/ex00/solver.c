/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:02:43 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 17:19:56 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	***solve1234_top(int ***matrix, int *input)
{	
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (input[i] == 4)
		{
			j = 0;
			while (j < 4)
			{
				matrix[0][j][i] = j + 1;
				j++;
			}
		}
		i++;
	}
	return (matrix);
}

int	***solve4_left_right(int ***matrix, int *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[i + 8] == 1)
			matrix[0][i][0] = 4;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (input[i + 12] == 1)
			matrix[0][i][3] = 4;
		i++;
	}
	return (matrix);
}

int	***solve4_top_bot(int ***matrix, int *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[i] == 1)
			matrix[0][0][i] = 4;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (input[i + 4] == 1)
			matrix[0][3][i] = 4;
		i++;
	}
	return (matrix);
}

int	***solver(int ***matrix, int *input)
{
	matrix = solve4_top_bot(matrix, input);
	matrix = solve4_left_right(matrix, input);
	matrix = solve1234_top(matrix, input);
	matrix = solve1234_bot(matrix, input);
	matrix = solve1234_left(matrix, input);
	matrix = solve1234_right(matrix, input);
	init_matrix_1(matrix);
	if (backtracking(matrix, 0, input))
		return (matrix);
	else
		return (matrix);
	return (matrix);
}
