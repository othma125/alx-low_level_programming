#include "main.h"

/**
 * puts2 - function name
 * @s: input string
 * Return: none
 */
void puts2(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i = i + 2;
	}
	_putchar('\n');
}
