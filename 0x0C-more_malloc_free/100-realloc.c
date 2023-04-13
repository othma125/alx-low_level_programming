#include <stdlib.h>

/**
 * _realloc - check code
 * @ptr: pointer
 * @o: ungigned integer
 * @n: unsigned integer
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int o, unsigned int n)
{
	void *array;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(n));
	if (o == n)
		return (ptr);
	if (n == 0)
	{
		free(ptr);
		return (NULL);
	}
	array = malloc(n);
	if (array == 0)
		return (NULL);
	o = n < o ? n : o;
	for (i = 0; i < o; i++)
		((char *)array)[i] = ((char *)ptr)[i];
	free(ptr);
	return (array);
}
