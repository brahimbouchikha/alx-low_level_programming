#include "main.h"

/**
 * square - find square
 * @n: int to find the square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
