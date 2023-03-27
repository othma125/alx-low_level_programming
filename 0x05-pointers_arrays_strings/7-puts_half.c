#include "main.h"
#include <string.h>

/**
 * puts_half - function name
 * @s: input string
 * Return: none
 */
void puts_half(char *s)
{
	int len = strlen(s), half = len / 2;
	int i = half;

	if (len % 2)
		i++;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
