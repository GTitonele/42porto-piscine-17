/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:36:30 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/01 15:33:40 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr (n / 10);
	}
	ft_putchar((n % 10) + '0');
}
/* int main()
{
	int i = 442;
	ft_putnbr (i);
	ft_putchar('\n');
	return (0);
} */