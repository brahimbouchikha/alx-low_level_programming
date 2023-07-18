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
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nill)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
