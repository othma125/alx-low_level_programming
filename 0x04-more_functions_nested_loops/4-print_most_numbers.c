#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: None
 */
void print_most_numbers(void)
{
	char c = '0';

	do {
		if (c != '4' && c != '2')
			_putchar(c);
		c++;
	} while (c <= '9');
	_putchar('\n');
}
