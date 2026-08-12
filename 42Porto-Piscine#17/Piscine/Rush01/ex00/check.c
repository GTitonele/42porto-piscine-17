/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:51:05 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 21:10:49 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

//FUNCAO PARA CHECAR column CIMA PARA BAIXO
int	ft_check_column_top(int matrix[4][4], int c)
{
	int	column [4];

	ft_take_col (matrix, c, column);
	return (ft_count_visible_left(column));
}

//FUNCAO PARA CHECAR column BAIXO PARA CIMA
int	ft_check_column_bottom(int matrix[4][4], int c)
{
	int	column [4];

	ft_take_col(matrix, c, column);
	return (ft_count_visible_right(column));
}

int	ft_check_tips(int matrix[4][4], int tips [16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (ft_check_column_top(matrix, i) != tips [i])
			return (0);
		if (ft_check_column_bottom(matrix, i) != tips [4 + i])
			return (0);
		if (ft_check_row_left(matrix, i) != tips [8 + i])
			return (0);
		if (ft_check_row_right(matrix, i) != tips [12 + i])
			return (0);
		i++;
	}
	return (1);
}
