#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints hexadecimal numbers in lowercase
 * Return: always 0
 */
int main(void)
{
	char hex = 48;
	while (hex <= 57)
	{
		putchar(hex);
		hex++;
	}
	hex = 97;
	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
