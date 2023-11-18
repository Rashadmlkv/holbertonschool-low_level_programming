#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate n size of mem
 * @nmemb: member size
 * @size: sizeof alternative
 * Return: pointer to array or null if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
        unsigned i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb + 1);
	if (ptr == NULL)
		return (NULL);

	if (size == 1)
	{
	for (i = 0; i < size; i++)
		ptr[i] = 62;
	}
	else
		for (i = 0; i < size; i++)
			ptr[i] = 0;

	return ptr;
}
