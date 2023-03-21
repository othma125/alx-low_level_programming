#include "main.h"

/**
 * print_sign - function that return sign
 *@n: The number to be checked
 *
 * Return: true or false
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
