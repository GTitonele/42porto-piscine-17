/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 14:34:59 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/02 14:36:03 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	tips[16];

	if (argc != 2 || !ft_parse(argv[1], tips))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_start_matrix(matrix);
	if (ft_decision(matrix, tips))
	{
		ft_matrix(matrix);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
