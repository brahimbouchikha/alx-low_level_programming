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
			if(( i * j) >= 10)
				_putchar('0' + prod / 10);
sh: 1: q: not found
				_putchar(' ');
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
