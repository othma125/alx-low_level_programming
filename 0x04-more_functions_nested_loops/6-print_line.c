#include "main.h"

/**
 * print_line - check code
 * @n: lines counter
 * Return: None
 */
void print_line(int n)
{
	int i = 0;
	char c = '_';

	while (i < n)
	{
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
