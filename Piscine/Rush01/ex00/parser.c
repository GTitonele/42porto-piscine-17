/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:39:06 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 14:39:07 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_parse(char *str, int tips [16])
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (p < 16)
	{
		if (str[i] < '1' || str[i] > '4')
			return (0);
		tips[p] = str[i] - '0';
		p++;
		i++;
		if (p < 16)
		{
			if (str[i] != ' ')
				return (0);
			i++;
		}
	}
	if (str[i] != '\0')
		return (0);
	return (1);
}
