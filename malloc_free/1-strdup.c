#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: ptr if success, NULL otherwise
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size = 0;

	while (str[size] != '\0')
		size++;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	return (ptr);
}
