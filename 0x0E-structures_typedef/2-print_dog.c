#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a struct dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
}
