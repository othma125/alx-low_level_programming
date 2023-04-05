#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @n: test integer
 * @s: integer
 *
 * Return: integer
 */
int _sqrt(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s > n / 2)
		return (-1);
	return (_sqrt(n, s + 1));
}
/**
 * _sqrt_recursion - check code
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(n, 0));
}
