#include "main.h"

/**
 * _abs - give  argument
 * @r:  holds value
 *
 * Return: return positive int if lower than zero, else as it is
 */
int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r);
}
