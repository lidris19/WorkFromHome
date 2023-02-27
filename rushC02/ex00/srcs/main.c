/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:03:22 by vvalet            #+#    #+#             */
/*   Updated: 2023/02/26 21:13:31 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	translate(char *nbr, char *file)
{
	struct t_entry	*dict;
	long long		nb;

	nb = ft_atoi(nbr);
	if (nb < 0)
		return (2);
	dict = parse_dict(file);
	if (dict == NULL)
		return (3);
	ft_print(nb, dict);
	ft_free_pointers(dict);
	return (0);
}

void	error_message(int check)
{
	if (check == 1)
		write(1, "Error: Not enough arguments\n", 28);
	if (check == 2)
		write(1, "Error\n", 6);
	if (check == 3)
		write(1, "Dict Error\n", 11);
	if (check == 4)
		write(1, "Error: Too many arguments\n", 26);
}

int	main(int argc, char **argv)
{
	int	check;

	check = 0;
	if (argc < 2)
		check = 1;
	if (argc > 3)
		check = 4;
	if (argc == 2 && ft_strlen(argv[1]) != 0)
		check = translate(argv[1], "numbers.dict");
	if (argc == 3 && ft_strlen(argv[2]) != 0)
		check = translate(argv[2], argv[1]);
	if (argv[1] && ft_strlen(argv[1]) == 0)
		check = 2;
	if (argv[2] && ft_strlen(argv[2]) == 0)
		check = 2;
	error_message(check);
	return (check);
}
