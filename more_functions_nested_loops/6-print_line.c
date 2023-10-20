#include "main.h"

/**
 * print_line - func name
 * @n: argument
 * Description: print n times _ charachter
 */
void print_line(int n)
{
	int  i;

	if (n <= 0)
	{
		; }
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
