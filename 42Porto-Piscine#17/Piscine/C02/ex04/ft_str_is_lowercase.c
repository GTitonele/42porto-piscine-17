/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:47:53 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/27 17:43:14 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	printf("%d\n", ft_str_is_lowercase("42Porto"));   // 0
    printf("%d\n", ft_str_is_lowercase("hello"));  // 1
    printf("%d\n", ft_str_is_lowercase("")); // 1
    return (0);
}
	*/