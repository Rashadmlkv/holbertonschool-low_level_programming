#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: keyword
 * Return: String if found, null if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, c = 1;
	char **ptr;

	while (*haystack != '\0')
	{
		ptr = &haystack;
		if (**ptr == needle[i] && needle[i] != '\0')
		{
			i++;
			c = 1; }
		else
		{
			c = 0; }
		if (c == 1)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
