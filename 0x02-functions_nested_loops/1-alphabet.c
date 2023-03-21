#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: None.
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	} while (c <= 'z');
	_putchar('\n');
}
