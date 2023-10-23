#include "main.h"

/**
 * puts_half -print half of string
 * @str: string
 */
void puts_half(char *str)
{
	int base = 0, limit = 0;

	while (str[limit] != '\0')
	{
		limit++; }
	if (limit % 2 == 0)
		base = limit / 2;
	else
		base = (limit + 1) / 2;
	for (; base < limit; base++)
	{
		_putchar(str[base]); }
	_putchar('\n');
}
