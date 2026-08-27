/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:32:46 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/05 19:25:27 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*v;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	v = malloc(sizeof(int) * size);
	if (v == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		v[i] = min;
		i++;
		min++;
	}
	*range = v;
	return (size);
}

/* #include <stdio.h>

int	main()
{
	int *a;
	int i = 0;
	int x = 10;
	int y = 20;

	printf("%d\n\n", ft_ultimate_range(&a, x, y));
	while (i < 10)
	{
		printf("%d\n", a[i]);
		i++;
	}
} */
