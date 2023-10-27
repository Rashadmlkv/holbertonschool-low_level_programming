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
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++; }
	if (n > 98)
	{
		n = 98 - i;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j]; }
	return (dest);
}
