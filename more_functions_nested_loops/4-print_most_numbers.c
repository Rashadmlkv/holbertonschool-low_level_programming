#include "main.h"

/**
 * print_most_numbers - prints numbers except 2/4
 * Description: functions prints numbers from 0 to 9 except 4 and 2
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
			;
		else
			_putchar(i);
		i++; }
	_putchar('\n');
}
