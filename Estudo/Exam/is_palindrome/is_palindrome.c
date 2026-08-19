
#include <unistd.h>

int ft_strlen (char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

int ft_strcmp(char *str1, char *str2, int size)
{
	int i = 0;

	while (str1[i] && str1[i] == str2[size])
	{
		i++;
		size--;
	}
	return (str1[i] - str2[size]);
}


int main(int argc, char **argv)
{
	int i = 0;
	int size;

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	size = ft_strlen(argv[1]) - 1;
	if (ft_strcmp(&argv[1][i], &argv[1][i], size) == 0)
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}