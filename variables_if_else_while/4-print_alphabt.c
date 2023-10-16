#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print all lower case letters except q e
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
			;
		else
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
