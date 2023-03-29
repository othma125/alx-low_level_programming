#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int aux, i = 0, j = n - 1;

	for (; i < j; i++, j--)
	{
		aux = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = aux;
	}
}
