

int	occ_z(char *str)
{
	int i = 0;
	int cont = 0;
	while (str[i])
	{
		if(str[i] == 'Z')
			cont++;
		i++;
	}
	return (cont);
}