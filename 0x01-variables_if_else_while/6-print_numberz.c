#include <stdio.h>

/**
 * main - print all single difit number of base 10
 * Retrun: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
