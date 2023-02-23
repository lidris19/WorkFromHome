/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:34:28 by lidris            #+#    #+#             */
/*   Updated: 2023/02/17 11:02:37 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (*str == c)
		return (str);
	return ((void *) 0);
}

int	ft_check_base(char *base)
{
	int	base_size;
	int	i;
	int	j;

	base_size = ft_strlen(base);
	if (base_size < 2)
		return (0);
	i = -1;
	while (++i < base_size)
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= 32 || base[i] >= 127)
			return (0);
		j = i;
		while (++j < base_size)
			if (base[j] == base[i])
				return (0);
	}
	return (base_size);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	result;
	int	sign;

	base_size = ft_check_base(base);
	if (base_size == 0)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while (*str && ft_strchr(base, *str))
	{
		result = result * base_size + ft_strchr(base, *str) - base;
		str++;
	}
	return (result * sign);
}
