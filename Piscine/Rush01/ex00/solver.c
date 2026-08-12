/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:45:47 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 14:45:59 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

//FUNCAO PARA CHECAR OS LUGARES
int	ft_check_place(int matrix[4][4], int row, int column, int value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (matrix[row][i] == value)
			return (0);
		if (matrix[i][column] == value)
			return (0);
		i++;
	}
	return (1);
}

//PROCURAR ESPACO VAZIO
int	ft_empty(int matrix[4][4], int *row, int *column)
{
	int	l;
	int	c;

	l = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			if (matrix[l][c] == 0)
			{
				*row = l;
				*column = c;
				return (1);
			}
			c++;
		}
		l++;
	}
	return (0);
}

//FUNCAO PARA DEFINIR ONDE COLOCAR
int	ft_decision(int matrix[4][4], int tips [16])
{
	int	row;
	int	column;
	int	value;

	if (!ft_empty(matrix, &row, &column))
	{
		return (ft_check_tips(matrix, tips));
	}
	value = 1;
	while (value <= 4)
	{
		if (ft_check_place(matrix, row, column, value))
		{
			matrix[row][column] = value;
			if (ft_decision(matrix, tips))
				return (1);
			matrix[row][column] = 0;
		}
		value++;
	}
	return (0);
}
