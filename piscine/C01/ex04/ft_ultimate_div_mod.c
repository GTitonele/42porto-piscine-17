/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:21:48 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 11:27:48 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}

/*int main()
{
	int a = 10, b = 5;
	printf("a = %d\nb = %d\n\n", a, b);

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
}
*/