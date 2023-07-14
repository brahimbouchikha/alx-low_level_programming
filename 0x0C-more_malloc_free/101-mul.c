#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: arguements
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error ");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
