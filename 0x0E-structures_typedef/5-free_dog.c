#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - for freeing memory
 * @d: a pointer to the dog
 * Return: void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
