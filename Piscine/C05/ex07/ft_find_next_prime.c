/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 18:48:36 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/03 19:23:20 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	check;

	check = 1;
	i = 2;
	if (nb <= 1)
		check = 0;
	while (i < nb)
	{
		if (nb % i == 0)
			check = 0;
		i++;
	}
	if (check == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/* #include <stdio.h>

int main ()
{
	printf("%d\n\n", ft_find_next_prime(4));	
} */