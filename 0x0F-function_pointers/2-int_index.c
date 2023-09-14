#include "function_pointers.h"


 /**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the integer array to search.
 * @size: Size of the array.
 * @cmp: Pointer to a comparison function that
 *	takes an integer as its argument.
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
