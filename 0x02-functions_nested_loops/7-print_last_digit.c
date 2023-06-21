#include <limits.h>
#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the input number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int i = n;
	if (n < 0)
		i = -n;
	_putchar('0' + (i % 10));
	return (i % 10);
}
