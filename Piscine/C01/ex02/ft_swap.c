/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:30:59 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 11:27:28 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main() {
	
	int a, b;
	a=2;
	b=6;
	printf("\na=%d\nb=%d", a, b);
	ft_swap(&a, &b);
	printf("\na=%d\nb=%d", a, b);
}
*/