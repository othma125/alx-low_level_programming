#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check code
 *@d: dog pointer
 *Return: none
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %06f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
