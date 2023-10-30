#include "main.h"

/**
 * is_prime_number - if the input integer is a prime number return 0.
 * @n: number
 * Return: check if prime or not and return 1 or 0 respectively
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0 || n % 5 == 0)
		return (0);
	return (1);
}
