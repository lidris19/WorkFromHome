/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:57:01 by lidris            #+#    #+#             */
/*   Updated: 2023/02/22 16:05:48 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] == '\0')
		return (-s2[i]);
	else
		return (s1[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort(char **array, int size)
{
	int	i;
	int	j;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(array[j], array[min_index]) < 0)
				min_index = j;
			++j;
		}
		if (min_index != i)
			ft_swap(&array[i], &array[min_index]);
		++i;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_sort(argv +1, argc -1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
	return (0);
}
