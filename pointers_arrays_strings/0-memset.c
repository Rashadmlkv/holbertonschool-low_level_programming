#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: adress
 * @b: byte
 * @n: times
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
