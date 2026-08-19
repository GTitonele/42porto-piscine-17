
#include <unistd.h>

int ft_count (char c)
{
	int result;

	result = 1;
	if (c >= 'a' && c <= 'z')
		result += c - 'a'; 
	else if (c >= 'A' && c <= 'Z')
		result += c - 'A'; 
	return (result);
}


int	main (int argc, char **argv)
{
	int i;
	int j;
	int result;

	
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	
	while (argv[1][i])
	{
		result = ft_count(argv[1][i]);
		j = 0;
		while (j < result)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}