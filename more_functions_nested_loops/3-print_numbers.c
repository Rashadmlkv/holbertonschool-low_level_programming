#include "main.h"

/**
 * print_numbers - from 0 to 9
 * Descript: print numbers in a giver ascii set
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++; }
	_putchar('\n');
}
