#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using 
 * @b: input size to allocate 
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if(p == NUL)
		exit(98);

	return (p);
}
