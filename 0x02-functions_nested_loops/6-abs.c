#include "main.h"

/**
 * _abs - compute the absolute value of a integer
 *@n: input integer
 *Return: absolute value of input integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n *= -1);
	else
		return (n);

}
