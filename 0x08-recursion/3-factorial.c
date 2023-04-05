#include "main.h"

/**
 * factorial - check code
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
