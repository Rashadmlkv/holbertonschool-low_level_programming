#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: keyword
 * Return: String if found, null if not
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++; }
		j = 0;
		s++; }
	return ('\0');
}
