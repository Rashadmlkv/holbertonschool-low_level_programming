#include "main.h"
#include <stdio.h>

void times_table(void) {
	int n, m;
	char num1, num2;

for (n = 0; n <= 9; n++)
{
        num1 ='0'; num2 = '0';
        printf("## Line %d\n", n);
    for (m = 0; m <= 9; m++)
    {
            if ( n == 0 || m == 0)
            {
                if(m > 0)
                {
                        _putchar(' ');
                        _putchar('0');
                }
                else
                _putchar('0');
            }
            else
            {
                    printf("num2 : %d - n : %d\n", num2, n);
                    num2+= '0' + n;
                if(num2 > '9')
                {
                        num1+=1;
                        _putchar(num1);
                        _putchar(num2);
                }
                else
                {
                        _putchar(' ');
                        _putchar(num2);
                }
            }

            if (m < 9)
            {
            _putchar(',');
            _putchar(' ');
            }
    }
    _putchar('\n');
    m = '0';
}

}
