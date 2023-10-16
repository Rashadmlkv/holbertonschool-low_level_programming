#include "main.h"


/**
 * jack_bauer - for printing 24 hour
 *
 * Return: finish printing at 23:59
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

	for (hour1 = 48; hour1 < 51; hour1++)
	{
		for (hour2 = 48; hour2 < 58; hour2++)
		{
			for (min1 = 48; min1 < 54; min1++)
			{
				for (min2 = 48; min2 < 58; min2++)
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(min1);
					_putchar(min2);
					_putchar('\n');
				}
				if (hour1 == 50 && hour2 == 51 && min1 == 53 && min2 == 58)
				{
					return;
				}

				min2 = 48;
			}

			min1 = 48;
		}

		hour2 = 48;
	}
}
