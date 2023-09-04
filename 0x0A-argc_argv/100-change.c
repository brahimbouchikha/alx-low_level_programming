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
	int count = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
		while (cents > 0)
		{
			count++;
			if (cents - 25 >= 0)
			{
				cents -= 25;
				countinue;
			}
			if (cents - 10 >= 0)
			{
				cents -= 10;
				countinue;
			}
			if (cents - 5 >= 0)
			{
				cents -= 5;
				countinue;
			}
			if (cents - 2 >= 0)
			{
				cents -= 2;
				countinue;
			}
			if (cents - 1 >= 0)
			{
				cents -= 1;
				countinue;
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
