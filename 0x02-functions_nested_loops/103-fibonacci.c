#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 * Return: 0
 */
int main(void)
{
	int i, first = 1, second = 2, next, sum = 2;

	for (i = 0; i < 4000000; i++)
	{
		next = first + second;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}
	printf("%d\n", sum);
	return (0);
}
