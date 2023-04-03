#include "main.h"

/**
 * _memcpy - check code
 * @dest: string
 * @src: the char print
 * @n: unsigned int
 *
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}
