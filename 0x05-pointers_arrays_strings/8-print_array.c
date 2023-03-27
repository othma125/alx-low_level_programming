#include "main.h"
#include <stdio.h>

/**
 * print_array - function name
 * @arr: input array
 * @n: array length
 * Return: none
 */
void print_array(int *arr, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(arr + i));
		i++;
		if (i < n)
			printf(", ");
	}
	putchar('\n');
}
