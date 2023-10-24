#include "main.h"
#include <stdio.h>
/**
 * rev_string - print array reversed
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	char *buck;

	while (*s != '\0')
	{
		*buck = *s;
		s++;
		buck++;
		i++;
	}
	s--;
	for (; i > 0; i--)
	{

		*s = *(buck - i);
		s--;
	}
}
