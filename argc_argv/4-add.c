#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers.
 * @argc: counter
 * @argv: string
 * Return: 0 success, -1 error
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0); }

	for (i = 1; i < argc; i++)
	{
		if ((argv[i][1] < '0' || argv[i][1] > '9') && argv[i][1] != '\0')
		{
			printf("Error\n");
			return (1); }
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
