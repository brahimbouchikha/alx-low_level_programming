#include "main.h"

/**
 * create_array - creates an array of chars,
 *	and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize the array
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
