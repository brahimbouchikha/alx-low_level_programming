#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: number that will be chicked
 * Return: 1 if positive,0 if is 0, -1 otherwise
 */

int print_sing(int n)
{
	int r;
	if (n > 0)
	{
		_putchar('+');
		r = 1;	
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{	_putchar('-');
		r = -1;
	}
	return (r);
}
