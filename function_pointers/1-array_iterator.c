#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - ca;;bacl function for iteration arrays
 * @array: adress
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (n = 0; n < size; n++)
		action(array[n]);
	}
}
