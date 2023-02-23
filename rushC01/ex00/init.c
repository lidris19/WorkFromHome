/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:02:27 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 16:39:16 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	***init_matrix(int x, int y)
{
	int	***matrix;

	matrix = (int ***) malloc((2 + 1) * sizeof(int **));
	if (!(matrix))
		return (NULL);
	if (!(matrix))
		return (NULL);
	while (x < 4)
	{
		y = 0;
		matrix[x] = (int **) malloc((4 + 1) * sizeof(int *));
		while (y < 4)
		{
			matrix[x][y] = (int *) malloc((4 + 1) * sizeof(int));
			if (!(matrix))
				return (NULL);
			matrix[0][x][y] = 0;
			y++;
		}
		matrix[x][y] = 0;
		x++;
	}
	return (matrix);
}

void	init_matrix_1(int ***matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix[1][i][j] = matrix[0][i][j];
			j++;
		}
		i++;
	}
}
