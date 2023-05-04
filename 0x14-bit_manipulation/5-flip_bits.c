#include "main.h"

/**
 * flip_bits - check the code
 * @n: first integer
 * @m: second integer
 *
 * Return: flips count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned int count = 0;

	for (; i < 64; i++)
	{
		count += (n & 1) ^ (m & 1);
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
