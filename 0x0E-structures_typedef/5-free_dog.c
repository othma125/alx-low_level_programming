#include "dog.h"

/**
 * free_dog - check code
 *@d: dog pointer
 *Return: none
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
