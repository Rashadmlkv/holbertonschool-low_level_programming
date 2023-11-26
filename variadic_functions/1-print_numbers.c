#include "variadic_functions.h"

/**
 * print_numbers - print nums followed by newline
 * @separator: field char
 * @n: count of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL && i != n - 1)
			putchar(*separator);
		putchar(' ');
	}
	putchar('\n');
	va_end(ap);
}
