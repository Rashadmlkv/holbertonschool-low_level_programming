#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *ptr, i, sum = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sum * sizeof(int));

	if(ptr)
	{
		for (i = 0; min <= max; min++)
		{
			ptr[i] = min;
			i++; }
		return ptr;
	}

	free(ptr);
	return (NULL);
}
