#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index
 *	or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	unsigned int i, bitcount = 0;

	while (temp > 0)
	{
		temp = temp >> 1;
		bitcount++;
	}
	if (bitcount > index && bitcount != 0)
	{
		for (i = 0; i < bitcount; i++)
		{
			if (i == index)
			{
				return (n & 1);
			}
			n = n >> 1;
		}
	}
	return (-1);
}
