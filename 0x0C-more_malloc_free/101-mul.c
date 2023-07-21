#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int mul;
	unsigned int i;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (argv[1][i] < 48 || argv[1][i] > 57)
		{
			printf("Error");
			exit(98);
		}	
	}

	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (argv[2][i] < 48 || argv[2][i] > 57)
		{
			printf("Error");
			exit(98);
		}	
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	
	return (0);
}
