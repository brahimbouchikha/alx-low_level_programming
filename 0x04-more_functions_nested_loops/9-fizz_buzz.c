#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return: 0
 */

int main(void)
{
	int i;

	printf("1 2");
	for (i = 3; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");

		else if (i % 5 == 0)
			printf(" Buzz");

		else if (i % 3 == 0)
			printf(" Fizz");

		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
