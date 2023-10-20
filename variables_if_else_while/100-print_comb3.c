#include <stdio.h>

int main(void)
{
	int num1, num2;

	for (num2 = 0; num2 <= 9; num2++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			if (num1 <= num2)
			{
				;
			}
			else
			{
				putchar(num2 + '0');
				putchar(num1 + '0');
				if (num2 < 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
