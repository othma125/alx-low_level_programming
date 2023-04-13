#include <stdlib.h>
/**
 * malloc_checked - check code
 * @b: unsigned integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
