#include "main.h"

/**
 * _isalpha - gets charachter from main source
 * @c: holds value
 * description: return 1 if the value is letter, else 0
 *
 * Return: 1 - letter , 0 - non letter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
