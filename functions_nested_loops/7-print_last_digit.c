#include "main.h"

/**
 * print_last_digit - prints last digit
 * @x: argument
 * Description: prints last num of arg. changes negat. value to positive
 *
 * Return: Always last digit
 */
int print_last_digit(int x)
{
	int lastnum = x % 10;

	if (lastnum < 0)
		lastnum *= -1;

	_putchar(lastnum + '0');

	return (lastnum);
}
