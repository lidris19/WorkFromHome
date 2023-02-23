/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:11:31 by lidris            #+#    #+#             */
/*   Updated: 2023/02/22 19:19:55 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);
int ft_is_valid_base(char *base);
int ft_find_index(char *base, char c);
int ft_atoi_base(char *nbr, char *base);
int	is_base_valid(char *base);
int	is_nbr_valid(char *nbr, char *base_from);
char *ft_strchr(const char *s, int c);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int decimal;
	char *result;
	int negative;

	if (!nbr || !base_from || !base_to)
		return (NULL);

	if (!is_nbr_valid(nbr, base_from) || !ft_is_valid_base(base_from) ||
			!ft_is_valid_base(base_to))
		return (NULL);

	negative = (*nbr == '-');
	if (negative)
		++nbr;

	decimal = ft_atoi_base(nbr, base_from);
	if (decimal == 0)
	{
		result = (char *)malloc(sizeof(char) * 2);
		result[0] = base_to[0];
		result[1] = '\0';
		return (result);
	}

	result = (char *)malloc(sizeof(char) * 33);
	if (!result)
		return (NULL);

	int i = 0;
	if (negative)
	{
		result[i++] = '-';
		decimal = -decimal;
	}

	int base_to_len = ft_strlen(base_to);

	while (decimal > 0)
	{
		result[i++] = base_to[decimal % base_to_len];
		decimal /= base_to_len;
	}
	result[i] = '\0';

	int j = (negative) ? 1 : 0;
	int k = i - 1;
	while (j < k)
	{
		char temp = result[j];
		result[j++] = result[k];
		result[k--] = temp;
	}

	return (result);
}

