#include "main.h"

/**
 * rev_string - print array reversed
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, j;
	char arr[10];

	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}

	for (j = 0; i >= 0; i--)
	{
		*(s + j) = arr[i - 1];
		j++;
		}
}
