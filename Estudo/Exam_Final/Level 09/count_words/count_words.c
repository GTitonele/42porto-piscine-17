
int	count_words(char *str)
{
	int i = 0;
	int cont = 0;
	while (str[i])
	{
		if(str[i] != ' ' && str[i] != '\t' 
			&& (i == 0 || str[i - 1] == ' ' 
				|| str[i - 1] == '\t'))
		{
			cont++;
		}
		i++;
	}
	return (cont);
}
#include <stdio.h>

int main ()
{
	char s1[] = "    teste     teste   ";
	printf("%d\n\n", count_words(s1));
	return (0);
}