#include "main.h"

/**
 * _puts_recursion - check code
 * @s: string to display
 * Return: none
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
