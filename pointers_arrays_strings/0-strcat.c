#include "main.h"
#include <stdio.h>

/**
 * _strcat - combine two strings
 * @dest: destination and first string
 * @src: second string that will be combine
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
