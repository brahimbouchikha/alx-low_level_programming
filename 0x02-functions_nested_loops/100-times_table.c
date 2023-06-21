#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: n time
 */
void print_times_table(int n)
{
	int i, j, prod;
	
	if (n >= 0 && n <= 15)
	{
		for(i = 0; i <= n; i++)
		{
			for(j = 0; j <= n; j++)
			{
				prod = i * j;
				if (prod <= 9 && j > 0)	
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod > 9 && prod <= 99)
				{
					_putchar(' ');
					_putchar('0' + prod / 10);
				}
				else
				{
					_putchar('0' + prod / 100);
					_putchar('0' + prod / 10);
				}
				_putchar('0' + (prod % 10));
				if (j > 0 && j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('\n');
			}

		}
	}
}
