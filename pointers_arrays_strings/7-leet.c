#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * @a: string
 * Return: leet string
 */
char *leet(char *a)
{
	char arr[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};
	char *p = a;
	int i, flag;

	for (; *a != '\0'; a++)
	{
		flag = 1;
		for (i = 0; arr[i] != '\0' && flag == 1; i++)
		{
			if (*a == arr[i] || *a == (arr[i] - 32))
			{
				*a = num[i];
				flag = 0; } }
	}
	return (p);
}
