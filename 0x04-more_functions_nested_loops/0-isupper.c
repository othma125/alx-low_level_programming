#include "main.h"

/**
 * _isupper - check the code.
 * @c: input character
 * Return: true(=1) or false(=0).
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
