#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print numbers
 * Return: always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
