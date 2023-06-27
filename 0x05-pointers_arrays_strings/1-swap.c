#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @n: first integer input
 * @b: second ineger input
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	
	*a = *b;
	*b = tmp;
}
