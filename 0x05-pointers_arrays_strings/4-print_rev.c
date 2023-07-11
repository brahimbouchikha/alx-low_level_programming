#include "main.h"

/**
 * print_rev - print_rev
 * @s: input string
 */

void print_rev(char *s)
{
	int n = 0, i;

	while (s[n] != '\0')
	{
		n++;
	}

	for (i = n - 1; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
