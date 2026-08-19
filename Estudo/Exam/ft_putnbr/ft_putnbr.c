
#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	long number = nb;

	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
		ft_putnbr (number / 10);
	ft_putchar (number % 10 + '0');
}