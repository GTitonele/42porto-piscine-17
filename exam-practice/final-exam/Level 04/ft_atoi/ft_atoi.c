
int	ft_atoi(char *str)
{
	int i = 0;
	int signal = 1;
	int number = 0;

	while(str[i] && str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
		{	
			signal = -signal;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - '0';
		i++;
	}
	return (number * signal);
}
/* #include <stdio.h>

int main()
{
	char number[] = "   -422243Porto";
	printf("%d\n\n", ft_atoi(number));
} */