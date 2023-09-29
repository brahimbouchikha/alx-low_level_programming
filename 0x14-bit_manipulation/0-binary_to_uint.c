#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 *
 *
 * Return:the converter number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i;

	if (!b)
		return (0);
	while (*b)
	{	i = *b - '0';
		if (i != 0 && i != 1)
			return (0);
		x = (x << 1) | i;
		b++;
	}

	return (x);
}
