#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - Recursively checks for the square root of a number.
 * @n: The number to find the square root of.
 * @m: Possible root to be checked.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion_helper(int n, int m)
{
	if (n == 0 || n == 1)
		return (n);

	if (n < 0)
		return (-1);

	if (m * m == n)
		return (m);

	if (m * m > n)
		return (-1);

	return (_sqrt_recursion_helper(n, m + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
