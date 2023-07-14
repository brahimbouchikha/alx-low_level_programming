#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value integers
 * @max: max value integers
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int i, *ptr, k = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[k] = i;
		k++;
	}
	return (ptr);
}
