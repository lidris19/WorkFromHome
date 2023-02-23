/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:02:48 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 17:25:58 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	***solve1234_bot(int ***matrix, int *input)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (input[i + 4] == 4)
		{
			j = 4;
			while (j > 0)
			{
				matrix[0][j - 1][i] = 5 - j;
				j--;
			}
		}
		i++;
	}
	return (matrix);
}

int	***solve1234_left(int ***matrix, int *input)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		if (input[i + 8] == 4)
		{
			j = 0;
			while (j < 4)
			{
				matrix[0][i][j] = j + 1;
				j++;
			}
		}
		i++;
	}
	return (matrix);
}

int	***solve1234_right(int ***matrix, int *input)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		if (input[i + 12] == 4)
		{
			j = 0;
			k = 3;
			while (j < 4)
			{
				matrix[0][i][k] = j + 1;
				j++;
				k--;
			}
		}
		i++;
	}
	return (matrix);
}
