#include "main.h"

/**
 * print_diagonal - check code
 * @n: lines counter
 * Return: None
 */
void print_diagonal(int n)
{
	int i, j = 0;
	char c = '\\';

	do {
		i = 0;
		while (i < j)
		{
			_putchar(' ');
			i++;
		}
		if (n > 0)
			_putchar(c);
		_putchar('\n');
		j++;
	} while (j < n);
}
