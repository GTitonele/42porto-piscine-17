
int	occ_a(char *str)
{
	int i = 0;
	int cont = 0;
	while (str[i])
	{
		if(str[i] == 'A')
			cont++;
		i++;
	}
	return (cont);
}