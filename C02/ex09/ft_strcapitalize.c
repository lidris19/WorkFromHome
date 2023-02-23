/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:05:51 by lidris            #+#    #+#             */
/*   Updated: 2023/02/14 16:25:02 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	case_converter(char c, int to_upper)
{
	if (to_upper)
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
			c += 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] = case_converter(str[i], 1);
		else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = case_converter(str[i], 0);
		new_word = !is_alphanumeric(str[i]);
		i++;
	}
	return (str);
}
