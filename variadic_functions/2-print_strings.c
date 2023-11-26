#include "variadic_functions.h"

/**
 * print_strings - print given string followed by newline
 * @separator: separating characther
 * @n: count of given arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *strptr;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		strptr = va_arg(str, char *);

		printf("%s", strptr ? strptr : "(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(str);
}
