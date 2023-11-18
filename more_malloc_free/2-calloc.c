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
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		ptr[i] = 0;

	return ptr;
}
