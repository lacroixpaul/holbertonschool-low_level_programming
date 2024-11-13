#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - delete memory allocated.
 * @d: structure.
 **/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
	}
		free(d);
}
