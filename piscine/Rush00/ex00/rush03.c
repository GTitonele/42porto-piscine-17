/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhonasil <jhonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:17:59 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 14:35:47 by jhonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	condicaolargura(int largura, int y)
{
	if (largura == 0)
	{
		ft_putchar('A');
	}
	else if (largura == y - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	condicaocomprimento(int comprimento, int x)
{
	if (comprimento == 0)
	{
		ft_putchar('A');
	}
	else if (comprimento == x - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	escrita(int largura, int comprimento, int x, int y)
{
	if (y == 1)
	{
		condicaolargura(comprimento, x);
	}
	else if (x == 1)
	{
		condicaocomprimento(largura, y);
	}
	else if ((largura == y - 1 && comprimento == 0)
		|| (largura == 0 && comprimento == 0))
	{
		ft_putchar('A');
	}
	else if ((comprimento == x - 1 && largura == y - 1)
		|| (comprimento == x - 1 && largura == 0))
	{
		ft_putchar('C');
	}
	else if ((largura == 0 || largura == y - 1)
		|| (comprimento == 0 || comprimento == x - 1))
	{
		ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	largura;
	int	comprimento;

	largura = 0;
	comprimento = 0;
	if (x <= 0 || y <= 0)
		return ;
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
