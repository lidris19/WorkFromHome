/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 08:58:48 by lidris            #+#    #+#             */
/*   Updated: 2023/02/13 17:47:02 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	int		len;
	char	*str = "Quick brown fox";

	len = ft_strlen(str);
	printf("The length of the string is %d.\n", len);
	return (0);
}
*/
