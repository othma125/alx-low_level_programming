#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: binary string
 * Return: decimal value;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, n = 0, k = 1;

	if (b == NULL)
		return (n);
	while (b[len] != '\0')
		len++;
	if (len == 0)
		return (n);
	while (len > 0)
	{
		len--;
		if (b[len] == '1')
			n += k;
		else if (b[len] != '0')
			return (0);
		k *= 2;
	}
	return (n);
}
