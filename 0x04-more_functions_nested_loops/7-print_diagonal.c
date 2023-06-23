#include "main.h"

 /**
  * print_diagonal -  diagonal line on the terminal
  * @n: number of line to draws
  */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i <n; i++) 
			_putchar(92);

	_putchar('\n');
}
