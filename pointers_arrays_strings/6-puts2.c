#include "main.h"

/**
 * puts2 - print once after two digits
 * @str: string
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++; }
	for (j = 0; j <= i; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
