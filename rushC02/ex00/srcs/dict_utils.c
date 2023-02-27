/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:47:39 by lidris            #+#    #+#             */
/*   Updated: 2023/02/26 18:50:32 by lidris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	size_dict(int fd)
{
	char	*buffer;
	int		size;

	buffer = malloc(1);
	if (buffer == NULL)
		return (0);
	size = 0;
	while (read(fd, buffer, 1) == 1)
		size++;
	free(buffer);
	return (size);
}

char	*store_dict(char *file)
{
	char	*buffer;
	int		fd;
	int		size;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size = size_dict(fd);
	if (size == 0)
		return (NULL);
	buffer = malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	close(fd);
	fd = open(file, O_RDONLY);
	if (fd == 0)
	{
		free(buffer);
		return (NULL);
	}
	read(fd, buffer, size);
	close(fd);
	buffer[size] = '\0';
	return (buffer);
}
