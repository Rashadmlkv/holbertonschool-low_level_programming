#include "main.h"


/**
 * _islower - checks if lowercase or not
 * description: check character is low or not and give feedback
 *
 * Return: return 1 if yes , 0 if no
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
