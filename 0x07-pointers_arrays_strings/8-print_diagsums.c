#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @m: matrix
 * @size: integer
 * Return: none.
 */
void print_diagsums(int *m, int size)
{
	int i = 0, j, SUM1 = 0, SUM2 = 0;
	int *line = m;

	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			SUM1 += i == j ? *(line + j) : 0;
			SUM2 += i + j == size - 1 ? *(line + j) : 0;
		}
		line += size;
		i++;
	}
	printf("%d, %d\n", SUM1, SUM2);
}
