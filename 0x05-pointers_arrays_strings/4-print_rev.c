#include "main.h"

/**
 * print_rev - print_rev
 */

void print_rev(char *s)
{	
	int n, i;

	while (s[n] != "\n")
		n++;

	for (i = n-1; i>=0 ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
