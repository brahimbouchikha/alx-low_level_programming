#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	unsigned long  first = 1, second = 2, sum;
	int i;

	printf("1, 2");
	for (i = 3; i <= 98; i++)
	{
		sum = first + second;
		printf(", %lu", sum);
		first = second;
		second = sum;
	}
	return (0);
}
