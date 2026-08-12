
#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

int main ()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 4 == 0 && i % 7 == 0)
		{
			write (1, "buzzfizz", 8);
		}
		else if (i % 4 == 0)
		{
			write (1, "buzz", 4);
		}
		else if (i % 7 == 0)
		{
			write (1, "fizz", 4);
		}
		else 
		{
			if (i >= 10)
				ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
		}
		i++;
		write (1, "\n", 1);
	}
	return (0);
}