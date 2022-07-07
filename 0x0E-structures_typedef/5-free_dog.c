#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees dog
 * @d: Dog to be frreed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	{
}
