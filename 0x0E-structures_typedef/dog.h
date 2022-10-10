#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef of dog structure
 */
typedef struct dog dog_t;

/**
 * struct dog - a simple dog structure
 * @owner: owner of dog
 * @name: name of dog
 * @age: age of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
