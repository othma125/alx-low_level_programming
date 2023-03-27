#include "main.h"

/**
 * swap_int - function name
 * @a: first address
 * @b: second address
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
