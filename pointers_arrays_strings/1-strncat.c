#include "main.h"
#include <stdio.h>

/**
 * _strncat - combine two strings
 * @dest: destination and first string
 * @src: second string that will be combine
 * @n: times
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
