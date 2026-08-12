/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:06:09 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/28 21:02:58 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	printf("%d\n",ft_str_is_printable("PORTO"));     // 1
	printf("%d\n",ft_str_is_printable("123"));       // 1
	printf("%d\n",ft_str_is_printable("!@#$"));      // 1
	printf("%d\n",ft_str_is_printable(" "));         // 1  <- importante
	printf("%d\n",ft_str_is_printable("A B"));       // 1
	printf("%d\n",ft_str_is_printable("\n"));        // 0
	printf("%d\n",ft_str_is_printable("\t"));        // 0
	printf("%d\n",ft_str_is_printable(""));          // 1
    return (0);
}*/
