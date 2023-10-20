#include "main.h"
/**
 * print_triangle - func name
 * @size: arg
 * Description: print triangle to right side by #
 */
void print_triangle(int size)
{
	int i, j, delimiter = size;

	if (size <= 0)
	{
		_putchar('\n'); }
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < delimiter)
					_putchar(' ');
				else
					_putchar('#'); }
			--delimiter;
			_putchar('\n');
		}
	}
}
