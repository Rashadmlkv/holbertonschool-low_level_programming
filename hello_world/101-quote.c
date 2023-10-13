#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success in that program)
 */
int main(void)
{
	/**
	 *
	 * Print text, 59 charcs long, 1 string, as error output
	 *
	 */
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	59, 1, stderr);
	return (1);
}
