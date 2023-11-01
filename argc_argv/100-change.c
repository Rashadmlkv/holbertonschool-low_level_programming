#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for amount of money
 * @argc: count
 * @argv: string
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	int num = 0, j = 0, i;
	int arr[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; ; i++)
	{
		num -= arr[j];
		if (num == 0)
		{
			printf("%d\n", i);
			return (0);
		}
		if (num < 0)
		{
			num += arr[j];
			j++;
			i--;
		}
	}
	return (0);
}
