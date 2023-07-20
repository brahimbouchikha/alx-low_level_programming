#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 * Return: the integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
