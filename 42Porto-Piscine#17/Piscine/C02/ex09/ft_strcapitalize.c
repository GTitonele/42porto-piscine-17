/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:58:35 by gbaccell          #+#    #+#             */
/*   Updated: 2026/07/27 19:50:03 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	ft_strlowcase(str);
	i = 0;
	next = i + 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str [i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			if (str[next] >= 'a' && str[next] <= 'z')
			{
				str[next] -= 32;
			}
		}
		i++;
		next ++;
	}
	return (str);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char str[] = {"ola, tudo bem? 42palAVRas quaReNta-e-duas; cinquenta+e+um"};
	printf("%s\n", ft_strcapitalize(str));
}
 */