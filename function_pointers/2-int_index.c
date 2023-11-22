#include "function_pointers.h"

/**
 * int_index - find first index of variable
 * @array: adress
 * @size: limit
 * @cmp: function
 * Return: -1 if fault , index if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n); }
	}
	return (-1);
}
