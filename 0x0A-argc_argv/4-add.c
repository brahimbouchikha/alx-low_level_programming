#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 if success or no number passed, 1 if number contains symbols
 */

int main(int argc, char *argv[])
{
	unsigned int sum = 0, j;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
