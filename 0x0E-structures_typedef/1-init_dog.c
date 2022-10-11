#include "dog.h"

/**
 * init_dog - Short description
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner:another member
 *
 * Return: nothing!
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
