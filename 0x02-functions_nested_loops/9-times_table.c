#include "main.h"

/**
 * times_table - print the 9 time table
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		k = 0;
		for (j = 0; j <  10; j++)
		{
			_putchar('0' + (k + i));
			if (j <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
