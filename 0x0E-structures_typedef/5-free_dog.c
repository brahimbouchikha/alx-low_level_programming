#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - frees dogs
 * @d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}

}
