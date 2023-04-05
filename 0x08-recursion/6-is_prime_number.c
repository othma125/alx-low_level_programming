#include "main.h"

/**
 * is_prime - check code
 * @n: integer
 * @d: integer
 * Return: integer
 */
int is_prime(int n, int d)
{
	if (d > n / 2)
		return (1);
	else if (n % d == 0)
		return (0);
	return (is_prime(n, d % 2 == 0 ? d + 1 : d + 2));
}
/**
 * is_prime_number - check code
 * @n: integer
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	return (is_prime(n, 2));
}
