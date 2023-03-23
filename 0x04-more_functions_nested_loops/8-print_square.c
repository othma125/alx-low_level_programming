#include "main.h"

/**
 * print_square - check code
 * @size: lines counter
 * Return: None
 */
void print_square(int size)
{
	int i, j = 0;
	char c = '#';

	for (j = 0; j < size; j++)
	{
		i = 0;
		while (i < size)
		{
			_putchar(c);
			i++;
		}
		_putchar('\n');
	}
}
