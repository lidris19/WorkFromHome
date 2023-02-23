/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:02:34 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 17:25:21 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	args_errors(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 31)
		return (0);
	i = 0;
	while (argv[1][i])
	{
		if (i % 2 == 0 && (argv[1][i] < '1' || argv[1][i] > '4'))
			return (0);
		else if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	***matrix;
	int	*input;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(args_errors(argc, argv)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input = argv_to_int(argv);
	matrix = init_matrix(0, 0);
	matrix = solver(matrix, input);
	if (backtracking(matrix, 0, input))
		print_matrix(matrix);
	else
		write(1, "Error\n", 6);
	return (0);
}
