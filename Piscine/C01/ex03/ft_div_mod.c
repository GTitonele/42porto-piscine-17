/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:54:53 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 11:27:42 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int a;
	int b;
	int c;
	int d;
	
	a = 10;
	b = 2;
	ft_div_mod(a, b, &c, &d);
	printf("a=%d\nb=%d\nd=%d\nr=%d\n", a, b, c, d);
	
	return (0);
}
*/