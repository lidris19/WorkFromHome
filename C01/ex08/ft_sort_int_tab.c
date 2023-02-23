/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:59:48 by lidris            #+#    #+#             */
/*   Updated: 2023/02/13 18:37:38 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < size - 1 && sorted)
	{
		sorted = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				sorted = 1;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	i;
	int	tab[] = {3, 2, 1};

	size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
