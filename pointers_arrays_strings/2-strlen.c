#include "main.h"

/**
 * _strlen - count the size of string
 * @s: argument
 * Return: sum of charachters
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++; }
	return (i);
}
