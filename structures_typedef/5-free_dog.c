#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
