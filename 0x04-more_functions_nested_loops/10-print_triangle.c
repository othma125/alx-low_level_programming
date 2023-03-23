#include "main.h"

/**
 * print_triangle - check code
 * @size: colones counter in triangle base
 * Return: None
 */
void print_triangle(int size)
{
	int i, j = 0;
	char c = '#';

	do {
		j++;
		i = 0;
		while (i < size)
		{
			if (i < size - j)
				_putchar(' ');
			else
				_putchar(c);
			i++;
		}
		_putchar('\n');
	} while (j < size);
}
