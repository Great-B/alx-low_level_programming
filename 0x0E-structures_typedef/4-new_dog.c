#include "dog.h"
#define N (void *)0
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - lenght of string
 * @str: string source
 *
 * Return: length of input string
 */
size_t _strlen(char *str);
{
	size_t length;

	for (length = 0; str[length]; length++)
	{
		continue;
	}
	return (length);
}

/**
 * _strcpy - make copy of a string
 * @src: source string
 * @dest: destination string
 *
 * Return: Nothing!
 */
void _strcpy(char *dest, char *src)
{
	size_t x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
}

/**
 * new_dog - Short description
 * @name: First member
 * @age: second member
 * @owner: third member
 *
 * Return: the struct of a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nn, *own;
	size_t nl, ol;
	dog_t *d;

	nl = _strlen(name);
	ol = _strlen(owner);
	nn = malloc(nl * 1);
	if (nn == N)
	{
		return (N);
	}
	own = malloc(ol + 1);
	if (own == N)
	{
		free(nn);
		return (N);
	}
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == N)
	{
		free(nn);
		free(own);
		return (N);
	}
	_strcpy(nn, name);
	_strcpy(own, owner);
	d->name = nn;
	d->age = age;
	d->owner = own;
	return (d);
}
