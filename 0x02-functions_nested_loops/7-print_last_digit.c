#include <limits.h>
#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the input number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
