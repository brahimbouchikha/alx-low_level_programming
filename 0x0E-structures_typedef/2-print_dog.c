#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", ((*d).name == NULL) ? "(nil)" : (*d).name);
		printf("Age: %f", (*d).age);
		printf("Owner: %s", ((*d).owner == NULL) ? "(nil)" : (*d).owner);
	}
}
