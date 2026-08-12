/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:25:22 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/26 11:28:31 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

/*int main()
{
	int i=0;
	int array[] = {1, 2, 3, 4, 5};
	while (i < 5){
	printf("%d ", array[i]);
	i++;
	}
	ft_rev_int_tab(array, 5);
	i=0;
	while (i < 5){
	printf("%d ", array[i]);
	i++;
	}
}
*/