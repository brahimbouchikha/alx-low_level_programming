#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = *n, d, res = 0;
	unsigned int i, bitcount;

	if (*n == 0)
	{
		*n = 1 << index;
		return (1);
	}
	while (temp > 0)
	{
		temp = temp >> 1;
		bitcount++;
	}
	if (index <= bitcount)
	{
		i = bitcount - 1;
		while (bitcount > 0)
		{
			d = (i - index == 0) ? 1 : (*n >> (bitcount - 1)) & 1;
			res = (res << 1) | d;
			i--;
			bitcount--;
		}
		*n = res;
		return (1);
	}
	return (-1);
}
