#include "main.h"

/**
 * get_bit - check the code
 * @n: integer to print
 * @i: index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int i)
{
	if (i > 63)
		return (-1);
	if (i == 0)
		return (n & 1);
	return (get_bit(n >> 1, i - 1));
}
