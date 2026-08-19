/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 19:18:28 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/03 13:45:28 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 1;
	number = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (i <= power)
	{
		number *= nb;
		i++;
	}
	return (number);
}
/* #include <stdio.h>

int main()
{
	printf("%d\n\n", ft_iterative_power(10, 3));
	return (0);
} */