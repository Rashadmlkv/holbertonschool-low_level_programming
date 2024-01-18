#include "search_algos.h"

/**
 * binary_search - search
 * @array: array
 * @size: size
 * @value: value
 * Return: -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int m = 0, l = 0, r = size;

	while (l <= r)
	{
		m = l + (r - l) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
