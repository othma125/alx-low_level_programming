#include "function_pointers.h"
/**
 * int_index - check code
 * @a: array
 * @size: size of array
 * @f: function pointer
 * Return: integer
 */
int int_index(int *a, int size, int (*f)(int))
{
	int i;

	if (size <= 0 || a == NULL || f == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (f(a[i]) != 0)
			return (i);
	return (-1);
}
