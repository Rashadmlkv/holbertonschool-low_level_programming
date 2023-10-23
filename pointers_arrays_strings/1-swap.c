#include "main.h"

/**
 * swap_int - swap place of two variables' values
 * @a: first
 * @b: second
 */
void swap_int(int *a, int *b)
{
	int buck;

	buck = *a;
	*a = *b;
	*b = buck;
}
