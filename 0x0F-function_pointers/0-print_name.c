#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: input name
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
