
#include <unistd.h>

int str_len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int str_cmp(char *s1, int size)
{
	int i = 0;
	while (s1[i] && s1[i] == s1[size - 1] && i < (size - 1))
	{
		i++;
		size--;
	}
	return (s1[i] - s1[size - 1]);
}

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		if (str_cmp(argv[1], str_len(argv[1])) == 0)
		{	
			while (argv[1][i])
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}