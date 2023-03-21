#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	for (; i < 10 ; i++)
	{
		c = 'a';
		do {
			_putchar(c);
			c++;
		} while (c <= 'z');
	}
}
