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
		if (i % 2 == 0)
			_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
