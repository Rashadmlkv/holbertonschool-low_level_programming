#include "variadic_functions.h"

/**
 * sum_them_all - count the sum of all nums
 * @n: count of given arguments
 * Return - sum if success, 0 if not
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
