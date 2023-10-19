#include "main.h"

/**
 * more_numbers - print numbers ten times
 * DescriptionL: print numbers till 14 in char, ten times
 */
void more_numbers(void)
{
	int i, j, num1 = 0, num2 = 0;

	for (j = 1; j <= 10; j++)
	{
	for (i = 0; i <= 14; i++)
	{
		if (num1 > 9 || num2 == 1)
		{
			num2 = 1;
			num1 = num1 % 10;
			_putchar(num2 + '0'); }
		_putchar(num1 + '0');
		num1++; }
	_putchar('\n');
	num1 = num2 = 0; }
}
