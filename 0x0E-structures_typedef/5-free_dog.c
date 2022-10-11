#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Short description
 * @d: First member
 *
 * Return: nothing!
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
