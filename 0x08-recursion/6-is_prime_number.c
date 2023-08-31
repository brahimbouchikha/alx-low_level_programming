#include "main.h"

/**
 * divisor - Find a divisor
 * @number: the input number
 * @val: the start from
 *
 * Return: int
 */

int divisor(int number, int val)
{
	if (number <= 1 || number % val == 0)
	{
		return (0);
	}
	else if (val * val <= number)
	{
		return (divisor(number, val + 1));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - check number if is prime
 * @n: the number to check
 *
 * Return: returns 1 is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (divisor(n, 2));
}
