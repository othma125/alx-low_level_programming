#include <stdlib.h>
#include <string.h>
/**
 * _calloc - check code
 * @nmemb: ungigned integer
 * @n: unsigned integer
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int n)
{
	char *array;
	unsigned int i;

	if (nmemb * n == 0)
		return (NULL);
	array = malloc(nmemb * n);
	if (array == 0)
		return (NULL);
	for (i = 0; i < nmemb * n; i++)
		array[i] = 0;
	return (array);
}
