#include "main.h"
#include "stdio.h"


/**
 * print_to_98 - function name
 * @n: stores number
 * Description: print numbers from given to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
