/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhonasil <jhonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:17:59 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 12:07:51 by jhonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	escrita(int largura, int comprimento, int x, int y)
{
	if ((largura == 0 && comprimento == 0)
		|| (largura == 0 && comprimento == x - 1)
		|| (largura == y - 1 && comprimento == 0)
		|| (largura == y - 1 && comprimento == x - 1))
	{
		ft_putchar('o');
	}
	else if (largura == 0 || largura == y - 1)
	{
		ft_putchar('-');
	}
	else if (comprimento == 0 || comprimento == x - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	largura;
	int	comprimento;

	largura = 0;
	comprimento = 0;
	while (largura < y)
	{
		comprimento = 0;
		while (comprimento < x)
		{
			escrita(largura, comprimento, x, y);
			comprimento ++;
		}
		ft_putchar('\n');
		largura++;
	}
}
