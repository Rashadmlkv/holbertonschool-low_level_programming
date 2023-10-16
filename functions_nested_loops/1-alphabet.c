#include "main.h"

/**
 * main - Entry point
 * description: print lowercase letters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
