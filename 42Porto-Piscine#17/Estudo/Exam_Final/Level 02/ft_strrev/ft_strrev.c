
char	*ft_strrev(char *str)
{
	int i = 0;
	int size;
	char temp;

	while (str[i])
		i++;
	size = i - 1;
	i = 0;
	while (str[i] && i < size)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}