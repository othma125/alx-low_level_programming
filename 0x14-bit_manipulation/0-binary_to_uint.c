#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary string
 * Return: decimal value;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, k = 1;

	if (b == NULL)
		return (n);
	while (b[n] != '\0')
	{
		k *= 2;
		n++;
	}
	n = 0;
	k /= 2;
	while (*b != '\0')
	{
		if (*b == '1')
			n += k;
		else if (*b != '0')
			return (0);
		b++;
		k /= 2;
	}
	return (n);
}
