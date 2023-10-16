#include <stdio.h>

/**
 * main - Entry point
 *
 * description: seperate numbers by , followed by space
 * Return: always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
