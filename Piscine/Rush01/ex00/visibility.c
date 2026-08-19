/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:48:50 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 14:51:25 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

//FUNCAO PARA CONTAR visible esquerda pra direita
int	ft_count_visible_left(int row [4])
{
	int	i;
	int	bigger;
	int	visible;

	i = 0;
	bigger = 0;
	visible = 0;
	while (i < 4)
	{
		if (row[i] > bigger)
		{
			bigger = row[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

//FUNCAO PARA CONTAR visible direita para esquerda
int	ft_count_visible_right(int row [4])
{
	int	i;
	int	bigger;
	int	visible;

	i = 3;
	bigger = 0;
	visible = 0;
	while (i >= 0)
	{
		if (row[i] > bigger)
		{
			bigger = row[i];
			visible++;
		}
		i--;
	}
	return (visible);
}

//FUNCAO PARA CHECAR A LINHA ESQUERDA PRA DIREITA
int	ft_check_row_left(int matrix[4][4], int l)
{
	return (ft_count_visible_left(matrix[l]));
}

//FUNCAO PARA CHECAR A LINHA DIREITA PRA ESQUERDA
int	ft_check_row_right(int matrix[4][4], int l)
{
	return (ft_count_visible_right(matrix[l]));
}

//FUNCAO PARA CHECAR A column
void	ft_take_col(int matrix[4][4], int c, int column[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		column[i] = matrix[i][c];
		i++;
	}
}
