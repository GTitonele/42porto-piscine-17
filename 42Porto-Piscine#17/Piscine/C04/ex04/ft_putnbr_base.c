/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 15:53:58 by gbaccell          #+#    #+#             */
/*   Updated: 2026/08/01 16:04:30 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
	}
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base);
	}
	ft_putchar(base[n % base_len]);
}
/* #include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(8, "poneyvif");
	write(1, "\n", 1);

	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);

	return (0);
} */