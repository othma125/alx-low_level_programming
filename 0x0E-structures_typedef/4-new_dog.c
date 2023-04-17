#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - returns length of a string
 *@str: string
 *Return: integer
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}


/**
 *clone - clone a string
 *@src: string
 *Return: returns copied string
 */
char *clone(char *src)
{
	int i;
	char *dest;

	dest = (char *)malloc(_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - check code
 *@name: name
 *@age: age
 *@owner: owner
 *Return: dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = clone(name);
	if (d->name == NULL)
		return (NULL);
	d->age = age;
	d->owner = clone(owner);
	if (d->owner == NULL)
		return (NULL);
	return (d);
}
