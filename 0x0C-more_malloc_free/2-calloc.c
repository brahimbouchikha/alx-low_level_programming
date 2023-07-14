#include  "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = 0;

	return (ptr);
}
