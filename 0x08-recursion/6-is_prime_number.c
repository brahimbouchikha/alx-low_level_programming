#include "main.h"

int check_prime(int n, int othernumber);

/**
 * is_prime_number - check integer if is a prime number or no
 * @n: int
 *
 * Return: 1 if int is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if the can divide it
 * @n: int
 * @othernumber: int
 * Return: int
 */

int check_prime(int n, int othernumber)
{
	if (othernumber >= n && n > 1)
		return (1);
	else if (n % othernumber == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othernumber + 1));
}
