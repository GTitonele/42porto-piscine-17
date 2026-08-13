
#include <stdlib.h>

int get_len(long nbr)
{
	int len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	long number;
	int len;
	char *str;

	number = nbr;
	len = get_len(number);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	while (number > 0)
	{
		str[len - 1] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
