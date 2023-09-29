#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	int bitCount = 0;
	unsigned long int temp = n;

	while (temp > 0)
	{
		temp = temp >> 1;
		bitCount++;
	}
	while (bitCount > 0)
	{
		printf("%lu", (n >> (bitCount - 1)) & 1);
		bitCount--;
	}
}
