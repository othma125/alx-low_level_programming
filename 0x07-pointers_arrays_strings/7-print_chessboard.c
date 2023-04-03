#include "main.h"

/**
 * print_chessboard - check the code
 * @a: pointer to pointer
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char *k;

	while (i < 8)
	{
		j = 0;k = a[i];
		for (; j < 8; j++)
			_putchar(*(k + j));
		_putchar('\n');
		i++;
	}
}
