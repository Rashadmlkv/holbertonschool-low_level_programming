#include "search_algos.h"

/**
 * linear_search - search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 on error
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
