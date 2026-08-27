/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:43:35 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/27 17:40:59 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int main() {
	printf("%d\n", ft_str_is_numeric("1"));   // 1
    printf("%d\n", ft_str_is_numeric("Hello1"));  // 0
    printf("%d\n", ft_str_is_numeric(""));        // 1
    return (0);
}
	*/