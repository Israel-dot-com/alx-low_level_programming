#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog;
 * @d: pointer to struct dog
 * @name: name member
 * @age: age member
 * @owner: owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
