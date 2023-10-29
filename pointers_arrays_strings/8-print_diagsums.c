#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square matrix of ints.
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sumleft = 0, sumright = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sumleft += a[i];
		j += size - 1;
		sumright += a[j];
	}
	printf("%d, %d\n", sumleft, sumright);
}
