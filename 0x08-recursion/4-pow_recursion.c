#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The base value to be raised to the power of y
 * @y: The exponent value representing the power to which x is raised
 *
 * Return:  an integer value representing x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
