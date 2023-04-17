#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - check code
 *@d: dog pointer
 *@name: name
 *@age: age
 *@owner: owner
 *Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
