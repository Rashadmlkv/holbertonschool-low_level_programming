#include "main.h"

/**
 * _isdigit - func name
 * @c: argument
 * Description: Function looks for is digit
 * Return: 1 if is digit, 0 if not
 */
int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1); }
	return (0);
}
