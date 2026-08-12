#include <unistd.h>
#include <stdio.h>

int count_words(char *str)
{
	int i = 0;
	int cont = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			cont++;
		i++;
	}
	return (cont);
}

int main ()
{
	char s[] = "        ";
	printf("%d", count_words(s));
	return (0);
}