#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: Arguments
 * Rerturn:0
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);

	return (0);
}
