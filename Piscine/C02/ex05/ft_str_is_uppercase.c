/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:56:00 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/27 17:55:34 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

/*include <stdio.h>

int main() {
	printf("%d\n", ft_str_is_uppercase("PORTO"));   // 1
    printf("%d\n", ft_str_is_uppercase("\n"));  // 0
    printf("%d\n", ft_str_is_uppercase(""));        // 1
    return (0);
}
	*/