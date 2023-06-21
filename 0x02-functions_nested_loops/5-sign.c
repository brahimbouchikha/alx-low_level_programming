#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number that will be chicked
 * Return: 1 if positive,0 if is 0, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);	
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
