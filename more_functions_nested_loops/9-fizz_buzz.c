#include <stdio.h>

/**
 * main - source
 * Description: print numbers 1 to 100 and Fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz "); }
		else if (num % 5 == 0)
		{
			printf("Buzz "); }
		else if (num % 3 == 0)
		{
			printf("Fizz "); }
		else
		{
		printf("%d ", num); }
	}
	printf("\n");
	return (0);
}
