/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:52:22 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 14:54:15 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <unistd.h>

//ESCRITA WRITE
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//INICIAR A matrix
void	ft_start_matrix(int matrix[4][4])
{
	int	l;
	int	c;

	l = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			matrix[l][c] = 0;
			c++;
		}
		l++;
	}
}

//ESCREVER matrix
void	ft_matrix(int matrix[4][4])
{
	int	l;
	int	c;

	l = 0;
	while (l < 4)
	{
		c = 0;
		while (c < 4)
		{
			ft_putchar (matrix[l][c] + '0');
			if (c < 3)
			{
				ft_putchar (' ');
			}
			c++;
		}
		ft_putchar ('\n');
		l++;
	}
}
