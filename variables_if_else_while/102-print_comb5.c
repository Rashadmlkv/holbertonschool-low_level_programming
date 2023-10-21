#include <stdio.h>

/**
 * main - source
 * Description: print combinations of four numbers
 * Return: always 0
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n4 = 0; n4 <= 9; n4++)
	{
		for (n3 = 0; n3 <= 9; n3++)
		{
			for (n2 = 0; n2 <= 9; n2++)
			{
				for (n1 = 0; n1 <= 9; n1++)
				{
					if (n2 == 0 && n1 == 0)
					{
						n1 = 1; }
					if ((n1 + n2) <= (n3 + n4) || n2 < n4)
					{
						; }
					else
					{
						putchar(n4 + '0');
						putchar(n3 + '0');
						putchar(' ');
						putchar(n2 + '0');
						putchar(n1 + '0');
						if (n4 != 9 || n3 != 8)
						{
							putchar(',');
							putchar(' '); }}}}}}
	putchar('\n');
	return (0);
}
