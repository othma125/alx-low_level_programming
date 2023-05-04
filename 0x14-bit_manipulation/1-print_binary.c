#include "main.h"

/**
 * print_binary - check the code
 * @n: integer to print
 * Return: none
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
