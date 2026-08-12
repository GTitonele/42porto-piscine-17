
#include <unistd.h>


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}



int main (int argc, char **argv)
{
	int i;
	int size;

	
	if (argc != 2)
	{	
		write (1, "\n", 1);
		return (0);
	}
	i = 1;
	size = ft_strlen(argv[i]);
	size--;
	while (size >= 0)
	{
		write (1, &argv[1][size], 1);
		size--;
	}
	write (1, "\n", 1);
	return (0);
}