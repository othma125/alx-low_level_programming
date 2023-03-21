#include "main.h"

/**
 * print_last_digit - function that return last digit of an integer
 *@n: The number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int modulo = n % 10;

	if (modulo < 0)
	{
		_putchar('0' - modulo);
		return (-modulo);
	}
	_putchar('0' + modulo);
	return (modulo);
}
