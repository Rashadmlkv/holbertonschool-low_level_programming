#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: keyword
 * Return: counter if found , null if not
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, bool = 0, counter = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0' && bool == 0)
		{
			if (*s == accept[j])
				bool = 1;
			j++;
		}
		if (bool == 0)
			return (counter);
		counter++;
		j = 0;
		bool = 0;
		s++;
	}
	return ('\0');

}
