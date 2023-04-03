#include "main.h"

/**
 * _memset - check code
 * @s: string
 * @b: the char print
 * @n: unsigned int
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *buffer = s;

	for (i = 0; i < n ; i++)
	{
		*buffer = b;
		buffer++;

	}
	return (s);
}
