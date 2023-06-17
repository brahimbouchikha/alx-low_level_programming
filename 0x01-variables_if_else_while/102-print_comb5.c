#include <stdio.h>

/**
 * main - print all possible combin of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
