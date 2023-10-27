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
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
