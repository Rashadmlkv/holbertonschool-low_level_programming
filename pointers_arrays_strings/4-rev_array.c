#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int temp = 0, left = 0, right = n - 1;

	while (left < n / 2)
	{
		temp = a[right];
		a[right] = a[left];
		a[left] = temp;
		left++;
		right--; }
}
