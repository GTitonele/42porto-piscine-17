/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 14:21:11 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/05 19:35:37 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total += (size - 1) * ft_strlen(sep);
	return (total);
}

int	ft_copy(char *dest, char *src, int k)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*array;

	array = malloc(ft_total_len(size, strs, sep) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		k = ft_copy(array, strs[i], k);
		if (i < size - 1)
			k = ft_copy(array, sep, k);
		i++;
	}
	array[k] = '\0';
	return (array);
}
/* #include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"42", "Porto", "Piscine"};
	char	*result;

	result = ft_strjoin(3, strs, " - ");
	if (result == NULL)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
} */