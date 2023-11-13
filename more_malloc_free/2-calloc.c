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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
