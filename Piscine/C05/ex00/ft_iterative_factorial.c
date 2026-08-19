/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:21:40 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 18:55:28 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		number = number * i;
		i++;
	}
	return (number);
}

/* #include <stdio.h>

int main ()
{
	int x;

	x = 6;
	printf("%d\n\n", ft_iterative_factorial(x));
	
} */