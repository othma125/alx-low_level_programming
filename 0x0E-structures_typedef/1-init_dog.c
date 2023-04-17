#include <stdlib.h>
#include "dog.h"
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
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
