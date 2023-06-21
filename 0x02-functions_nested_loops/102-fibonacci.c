#include <stdio.h>

/**
 * main : prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int first, second, sum;
	int i;

	first = 1;
	second = 2;	
	printf("1, 2, ");
	for (i = 2; i <= 50; i++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%ld, sum");
		if (i < 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
