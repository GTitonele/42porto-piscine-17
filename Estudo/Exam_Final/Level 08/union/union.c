
#include <unistd.h>

int check(char *str, char c, int i)
{
	i--;
	while(i >= 0)
	{
		if (str[i] == c)
			return (0);
		i--;
	}
	return (1);
}


int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if(check(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			i = 0;
			while (argv[1][i] && argv[1][i] != argv[2][j])
				i++;
			if (!argv[1][i] && check(argv[2], argv[2][j], j))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}