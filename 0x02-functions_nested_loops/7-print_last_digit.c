#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the input number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *=-1;
	_putchari('0' + n % 10);
	return (n % 10);
}
