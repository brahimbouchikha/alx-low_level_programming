#include "main.h"

/**
 * _isdigit - check if a input is digit
 * @c: the input
 * Return: 1 if is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
