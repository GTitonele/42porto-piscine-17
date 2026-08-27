
int	count_alen(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] == 'a')
			return(i);
		i++;
	}
	return (i);
}