#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: None
 */
void print_numbers(void)
{
	char c = '0';

	do {
		_putchar(c);
		c++;
	} while (c <= '9');
	_putchar('\n');
}
