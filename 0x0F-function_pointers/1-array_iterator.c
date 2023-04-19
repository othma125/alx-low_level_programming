#include <stdlib.h>

/**
 * array_iterator - check code
 * @a: int array
 * @n: array size
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *a, size_t n, void (*action)(int))
{
	unsigned int i;

	for (i = 0; a != NULL && action != NULL && i < n; i++)
		action(a[i]);
}
