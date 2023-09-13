#include "function_pointers.h"

/**
 * array_iterator - Applies a given
 *	action function to each element in an array.
 * @array: Pointer to the integer array to iterate over.
 * @size: Size of the array.
 * @action: Pointer to a function that takes an integer as its argument.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
