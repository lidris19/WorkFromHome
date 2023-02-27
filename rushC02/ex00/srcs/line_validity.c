/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validity.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:44:32 by vvalet            #+#    #+#             */
/*   Updated: 2023/02/26 20:20:02 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_valid_input(char *input)
{
	int	index;

	index = 0;
	if (!is_digit(input[index]))
		return (0);
	while (is_digit(input[index]))
		index++;
	while (is_space(input[index]))
		index++;
	if (input[index] != ':')
		return (0);
	index++;
	while (is_space(input[index]))
		index++;
	return (is_valid_word(input, index));
}

int	is_valid_word(char *input, int index)
{
	if (!is_print(input[index]))
		return (0);
	index++;
	while (input[index] != '\n' && input[index] != '\0')
	{
		if (!is_print(input[index])
			&& input[index] != '\n' && input[index] != '\0')
			return (0);
		index++;
	}
	if (input[index] != '\n' && input[index] != '\0')
		return (0);
	return (1);
}
