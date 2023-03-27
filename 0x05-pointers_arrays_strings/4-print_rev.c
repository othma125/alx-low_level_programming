#include "main.h"
#include <string.h>

/**
 * print_rev - function name
 * @s: input string
 * Return: none
 */
void print_rev(char *s)
{
	int len = strlen(s), i = len - 1;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
