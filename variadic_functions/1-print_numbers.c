#include "variadic_functions.h"

/**
 * print_numbers - print nums followed by newline
 * @separator: field char
 * @n: count of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(nums);
}
