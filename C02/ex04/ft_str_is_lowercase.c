/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:41:26 by lidris            #+#    #+#             */
/*   Updated: 2023/02/14 12:45:06 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lowercase_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
