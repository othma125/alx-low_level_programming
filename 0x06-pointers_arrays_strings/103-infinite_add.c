#include "main.h"
#include <string.h>

/**
 * infinite_add - check the code
 * @n1: first number
 * @n2: second number
 * @r: sum result
 * @size_r: max size of result
 * Return: the sum or 0 if there is an error.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = strlen(n1) - 1, j = strlen(n2) - 1;
	int k = 0, a, b, n = 0, sum;

	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			a = n1[i] - 48;
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - 48;
		else
			b = 0;
		sum = a + b + n;
		n = sum / 10;
		r[k] = '0' + sum % 10;
		i--;
		j--;
		k++;
		if (k >= size_r)
			return (0);
	}
	if (n > 0)
		r[k] = '0' + n;
	k++;
	if (k >= size_r)
 		return (0);
	r[k] = '\0';
	i = 0;
	j = strlen(r) - 1;
	for (; i < j; i++, j--)
	{
		sum = *(r + i);
		*(r + i) = *(r + j);
		*(r + j) = sum;
	}
	return (r);
}
