/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 08:29:53 by lidris            #+#    #+#             */
/*   Updated: 2023/02/17 10:29:21 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// Check if the base exist or is equal to zero, otherwise segfault
// Handle min int value, otherwise segfault



#include	<unistd.h>

int	ft_check_base(char *base)
{
	int	base_size;
	int	i;

	base_size = 0;
	while (base[base_size])
	{
		if (base[base_size] == '+' || base[base_size] == '-')
			return (0);
		i = base_size + 1;
		while (base[i])
		{
			if (base[i] == base[base_size])
				return (0);
			i++;
		}
		base_size++;
	}
	if (base_size < 2)
		return (0);
	return (base_size);
}

void	ft_putnbr_base_rec(int nbr, char *base, int base_size)
{
	char	c;

	if (nbr >= base_size)
	{
		ft_putnbr_base_rec(nbr / base_size, base, base_size);
		ft_putnbr_base_rec(nbr % base_size, base, base_size);
	}
	else
	{
		c = base[nbr];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	base_size = ft_check_base(base);
	if (base_size == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_putnbr_base_rec(nbr, base, base_size);
}
