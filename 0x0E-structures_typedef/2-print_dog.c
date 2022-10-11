#include "dog.h"
#define _NULL (void *)0
#define ISNULL(x) ((x) == _NULL ? 1 : 0)
#include <stdio.h>

/**
 * print_dog - Short description
 * @d: First member
 *
 * Return: nothing!
 */
void print_dog(struct dog *d)
{
	if (d != _NULL)
	{
		if (ISNULL(d->name))
		{
			puts("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %1.f\n", d->age);
		if (ISNULL(d->owner))
		{
			puts("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
