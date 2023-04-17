#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: check code
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);

#endif
