#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count, cents;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	count = 0;
	while (cents > 0)
	{
		count++;
		if (cents - 25 >= 0)
		{
			cents -= 25;
			continue;
		}
		if (cents - 10 >= 0)
		{
			cents -= 10;
			continue;
		}
		if (cents - 5 >= 0)
		{
			cents -= 5;
			continue;
		}
		if (cents - 2 >= 0)
		{
			cents -= 2;
			continue;
		}
		if (cents - 1 >= 0)
		{
			cents -= 1;
			continue;
		}
	}

	printf("%d\n", count);
	return (0);
}
