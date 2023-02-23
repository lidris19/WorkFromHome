/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_to_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:02:14 by llapage           #+#    #+#             */
/*   Updated: 2023/02/19 17:24:26 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	*argv_to_int(char **argv)
{
	int	*input;
	int	i;
	int	j;

	i = 0;
	j = 0;
	input = (int *) malloc((16 + 1) * sizeof(int));
	while (argv[1][i])
	{
		if (argv[1][i] != ' ')
		{
			input[j] = argv[1][i] - '0';
			j++;
		}
		i++;
	}
	input[j] = 0;
	return (input);
}
