/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:50:31 by lidris            #+#    #+#             */
/*   Updated: 2023/02/22 19:19:34 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_strlen(char *str)
{
    int	i = 0;
    while (str[i] != '\0')
        ++i;
    return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return (char*)s;
		s++;
	}

	if ((char)c == '\0')
		return (char*)s;

	return NULL;
}

int		is_base_valid(char *base)
{
	int i;
	int j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_nbr_valid(char *nbr, char *base_from)
{
	int i;
	int sign_count;

	if (ft_strlen(nbr) == 0)
		return (0);
	sign_count = 0;
	i = 0;
	if (nbr[0] == '+' || nbr[0] == '-')
	{
		sign_count++;
		if (nbr[0] == '-' && ft_strlen(nbr) > 1)
			i++;
	}
	while (nbr[i] != '\0')
	{
		if (nbr[i] <= 32 || nbr[i] >= 127)
			return (0);
		if (nbr[i] == '+' || nbr[i] == '-')
			return (0);
		if (!ft_strchr(base_from, nbr[i]))
			return (0);
		i++;
	}
	if (sign_count > 1)
		return (0);
	return (1);
}

int	ft_is_valid_base(char *base)
{
    int	i;
	int	j;

    if (ft_strlen(base) < 2)
        return (0);
    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '-' || base[i] == '+')
            return (0);
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (0);
            ++j;
        }
        ++i;
    }
    return (1);
}

int	ft_find_index(char *base, char c)
{
    int	i;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == c)
            return (i);
        ++i;
    }
    return (-1);
}

int	ft_atoi_base(char *nbr, char *base)
{
    int	result;
    int	sign;
    int	base_size;
	int	index;

	result = 0;
	sign = 1;
	base_size = ft_strlen(base);
    if (!ft_is_valid_base(base))
        return (0);

    while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
        ++nbr;

    while (*nbr == '-' || *nbr == '+')
    {
        if (*nbr == '-')
            sign = -sign;
        ++nbr;
    }

    while (*nbr != '\0')
    {
        index = ft_find_index(base, *nbr);
        if (index == -1)
            break;
        result = result * base_size + index;
        ++nbr;
    }
    return (result * sign);
}

