
#include <unistd.h>

void ft_change(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z')
			str[i] = 'a';
		else if (str[i] == 'Z')
			str[i] = 'A';
		else if (str[i] >= 'a' && str[i] <= 'y')
			str[i] += 1;
		else if (str[i] >= 'A' && str[i] <= 'Y')
			str[i] += 1;
		write(1, &str[i], 1);
		i++;
	}
	
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_change(argv[1]);
	write (1, "\n", 1);
	return (0);
}