#include "main.h"

/**
 * clear_bit - check the code
 * @n: integer to modifiy
 * @i: index
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int i)
{
	unsigned long int k;
	unsigned int j = 0;

	if (i > 63)
		return (-1);
	k = 1;
	for (; j < i; j++)
		k *= 2;
	if ((*n >> i) & 1)
		*n -= k;
	return (1);
}
