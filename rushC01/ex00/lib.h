/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidris <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:59:56 by lidris            #+#    #+#             */
/*   Updated: 2023/02/19 17:18:36 by llapage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
int		*argv_to_int(char **argv);
int		***solver(int ***matrix, int *argv);
int		args_errors(int argc, char **argv);
int		***solve1234_bot(int ***matrix, int *input);
int		***solve1234_top(int ***matrix, int *input);
int		***solve1234_left(int ***matrix, int *input);
int		***solve1234_right(int ***matrix, int *input);
int		backtracking(int ***matrix, int index, int *input);
int		***init_matrix(int x, int y);
void	init_matrix_1(int ***matrix);
int		row_check(int ***matrix, int index, int val);
int		col_check(int ***matrix, int index, int val);
int		is_valid_value(int ***matrix, int index, int val);
int		is_valid_solution(int ***matrix, int *input);
int		fail_col_top(int ***matrix, int col, int *input);
int		fail_col_bot(int ***matrix, int col, int *input);
int		fail_row_left(int ***matrix, int row, int *input);
int		fail_row_right(int ***matrix, int row, int *input);
void	print_matrix(int ***matrix);
void	ft_putchar(char c);
#endif
