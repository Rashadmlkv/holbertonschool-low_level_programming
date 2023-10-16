#include "main.h"


/**
 * print_alphabet_x10 - t prints 10 times the alphabet, in lowercase
 * description: told you just prints
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	while (i < 10)
	{
		while (letter < 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
