#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i = 0;
	char *s;

	s = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (s == NULL)
		return(NULL);
	while(src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}