#include "main.h"

/**
 * _isdigit - check the code.
 * @c: input character
 * Return: true(=1) or false(=0).
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
