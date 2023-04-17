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
/**
 * dog_t - new name of struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char *);


#endif