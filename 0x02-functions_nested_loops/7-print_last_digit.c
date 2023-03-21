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

	_putchar(_abs(modulo));
	return (_abs(modulo));
}
