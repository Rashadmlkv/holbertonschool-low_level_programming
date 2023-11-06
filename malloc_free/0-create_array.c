#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: size of array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails or 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(c) * size);
	unsigned int i;

	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0 ; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
