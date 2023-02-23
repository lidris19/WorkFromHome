/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:19:02 by lidris            #+#    #+#             */
/*   Updated: 2023/02/20 09:14:50 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	remaining;
	unsigned int	src_len;

	dest_len = 0;
	while (*dest && dest_len < size)
	{
		dest++;
		dest_len++;
	}
	remaining = size - dest_len;
	if (remaining == 0)
		return (dest_len + ft_strlen(src));
	while (*src && remaining-- > 1)
		*dest++ = *src++;
	*dest = '\0';
	src_len = 0;
	while (*src++)
		src_len++;
	return (dest_len + src_len);
}
