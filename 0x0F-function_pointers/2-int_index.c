#include "function_pointers"

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

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
