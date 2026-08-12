/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:41:07 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 21:09:54 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H
# include <unistd.h>
// ESCRITA
void	ft_putchar(char c);
//MATRIZ
void	ft_start_matrix(int matrix[4][4]);
void	ft_matrix(int matrix[4][4]);
void	ft_take_col(int matrix[4][4], int c, int column[4]);
//CONTADORES
int		ft_count_visible_left(int row [4]);
int		ft_count_visible_right(int row [4]);
//CHECAGEM DE rowS
int		ft_check_row_left(int matrix[4][4], int l);
int		ft_check_row_right(int matrix[4][4], int l);
//CHECAGEM DE columnS
int		ft_check_column_top(int matrix[4][4], int c);
int		ft_check_column_bottom(int matrix[4][4], int c);
//SOLVER
int		ft_check_place(int matrix[4][4], int row, int column, int value);
int		ft_empty(int matrix[4][4], int *row, int *column);
int		ft_check_tips(int matrix[4][4], int tips [16]);
int		ft_decision(int matrix[4][4], int tips [16]);
//PARSER
int		ft_parse(char *str, int tips [16]);

#endif