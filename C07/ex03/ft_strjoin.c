/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:41:11 by lidris            #+#    #+#             */
/*   Updated: 2023/02/20 17:13:42 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*str;
	int		i;
	int		j;
	int		k;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]) + ft_strlen(sep);
	res = (char *)malloc(sizeof(char) * (j + 1));
	str = res;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
			*str++ = strs[i][j];
		k = -1;
		while (sep[++k] != '\0' && i < size - 1)
			*str++ = sep[k];
	}
	*str = '\0';
	return (res);
}
