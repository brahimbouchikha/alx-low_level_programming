#include "main.h"

/**
 * times_table - print the 9 time table
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <  10; j++)
		{	prod = i * j;
			if (prod <= 9)
			{
				if (j > 0)
					_putchar(' ');
			}
			else
				_putchar('0' + (prod / 10));
			_putchar('0' +  (prod % 10));
			if (j <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
