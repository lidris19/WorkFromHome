/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 08:04:03 by vvalet            #+#    #+#             */
/*   Updated: 2023/02/26 21:24:09 by vvalet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_entry{
	long long	nbr;
	char		*word;
	int			end;
}	t_entry;
struct t_entry	*parse_dict(char *file);
long long		ft_atoi(char *str);
long long		ft_atoi_dict(char *str);
void			find_write(long long nbr, struct t_entry *dict);
void			ft_print(long long nbr, struct t_entry *dict);
void			print_units(long long nbr, struct t_entry *dict);
void			print_hundreds(long long nbr, struct t_entry *dict);
void			print_thousands(long long nbr, struct t_entry *dict);
void			print_millions(long long nbr, struct t_entry *dict);
void			print_billions(long long nbr, struct t_entry *dict);
void			ft_free_pointers(struct t_entry *dict);
void			ft_putstr(char *str);
int				is_valid_word(char *input, int index);
int				is_valid_input(char *input);
char			*ft_find_word(char *str);
char			*store_dict(char *file);
int				ft_strlen(char *str);
int				is_space(char c);
int				is_print(char c);
int				is_digit(char c);
int				size_dict(int fd);
int				b_ntry(char *buffer, struct t_entry *dict, int entry, int pos);
struct t_entry	*f_ntry(char *buffer, struct t_entry *dict, int entry, int pos);
int				get_number_of_entries(const char *buffer);
struct t_entry	*parse_dict(char *file);
#endif
