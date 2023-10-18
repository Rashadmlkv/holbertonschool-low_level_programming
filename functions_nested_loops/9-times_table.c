#include "main.h"

/**
 * times_table - print numbers
 * Description - numbers
 * Return: no return
 */
void times_table(void)
{ int x, y, num1, num2, lasdigi;

	for (x = 0; x <= 9; x++)
	{
		num1 = num2 = 0;
		for (y = 0; y <= 9; y++)
		{
			if (x == 0 || y == 0)
			{
				if (y > 0)
				{
					_putchar(' ');
					_putchar('0'); }
				else
				{
					_putchar('0'); }}
			else
			{
				num2 += x;
				if (num2 > 9)
				{
					num1 += 1;
					lasdigi = num2 % 10;
					num2 = lasdigi;
					_putchar(num1 + '0');
					_putchar(num2 + '0'); }
				else
				{
					if (num1 > 0)
					{
						_putchar(num1 + '0');
						_putchar(num2 + '0'); }
					else
					{
						_putchar(' ');
						_putchar(num2 + '0'); }}}
			if (y < 9)
			{
			_putchar(',');
			_putchar(' '); }}
		_putchar('\n'); }}
