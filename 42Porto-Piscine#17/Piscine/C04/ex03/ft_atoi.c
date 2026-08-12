/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:25:42 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/01 15:52:27 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negativo;
	int	num;

	i = 0;
	while (str[i] == ' '
		|| (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	negativo = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negativo++;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (negativo % 2 != 0)
		num = -num;
	return (num);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("42"));
	return (0);
}
 */