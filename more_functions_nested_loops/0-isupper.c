#include "main.h"

/**
 * _isupper - func name
 * @c: argument
 * Description: Function looks for upper case
 * Return: 1 if is uppercase, 0 if not
 */
int _isupper(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1); }
	return (0);
}
