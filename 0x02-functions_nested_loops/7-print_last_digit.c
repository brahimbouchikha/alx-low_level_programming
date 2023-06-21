#include <limits.h>
#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the input number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -(n % 10);
	else
		lastdigit = n % 10;

	_putchar('0' + lastdigit);
	return (lastdigit);
}
