
#include <unistd.h>

int check(char *str, char c, int i)
{
	int check = 1;
	i--;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			check = 0;
			return (check);
		}
		i--;
	}
	return(check);
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char c;
	if (argc == 3)
	{
		while (argv[1][i])
		{	
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					c = argv[1][i];
					if (check(argv[1], c, i) == 1)
					{
						write (1, &argv[1][i], 1);
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}