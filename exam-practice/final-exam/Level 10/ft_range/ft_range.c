
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *array;
	int size;
	int i = 0;
	int step;

	if (start >= end)
	{
		size = (start - end) + 1;
		step = -1;
	}
	else
	{
		size = (end - start) + 1;
		step = 1;
	}
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = start;
		start += step;
		i++;
	}
	return(array);
}