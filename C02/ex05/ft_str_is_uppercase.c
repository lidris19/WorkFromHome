/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:52:43 by lidris            #+#    #+#             */
/*   Updated: 2023/02/14 12:53:50 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase_alpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_uppercase_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
