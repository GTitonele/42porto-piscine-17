/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 18:44:40 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/27 17:39:44 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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

//#include <stdio.h>

/*int main() {
	printf("%d\n", ft_str_is_alpha("Hello"));   // 1
    printf("%d\n", ft_str_is_alpha("Hello1"));  // 0
    printf("%d\n", ft_str_is_alpha(""));        // 1
    return (0);
}*/