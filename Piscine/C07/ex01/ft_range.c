/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 10:53:56 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/05 19:24:36 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*v;

	if (min >= max)
		return (NULL);
	size = max - min;
	v = malloc(sizeof(int) * size);
	if (v == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		v[i] = min;
		i++;
		min++;
	}
	return (v);
}
/* #include <stdio.h>

int	main ()
{
	int x = 10;
	int y = 20;
	int *range;
	int i = 0;
	
	range = ft_range(x, y);
	if (range == NULL)
		return (1);
	while (i < y - x)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
} */