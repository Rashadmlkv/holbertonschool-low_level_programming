#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: 1st string
 * @s2: 2nd
 * Return: Neg is lower, Pos if higher, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (j < i)
		return (-13);
	if (j > i)
		return (13);
	return (0);
}
