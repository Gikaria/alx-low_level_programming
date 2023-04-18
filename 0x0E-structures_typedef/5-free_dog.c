#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free memory occupied by dog
 * @d: pointer to structure dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
