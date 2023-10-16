#include <stdio.h>

int main(void)
{
	int counter = 0;
	int hour1 = 48;
	int hour2 = 48;
	int min1 = 48;
	int min2 = 48;

	for (; hour1 < 51; hour1++)
	  {
	  for (; hour2 < 58; hour2++)
		{
		  for (; min1 < 54; min1++)
			{
			  for (; min2 < 58; min2++)
				{
				  if (hour1 == 50 && hour2 == 51 && min1 == 53 && min2 == 57)
					{
					  return (0);
					}
				  else
					{
					  putchar(hour1);
					  putchar(hour2);
					  putchar(':');
					  putchar(min1);
					  putchar(min2);
					  putchar('\n');
					}
				}
			  min2 = 48;
			}
		  min1 = 48;
		}
	  hour2 = 48;
	  }
}
