#include "main.h"
#include <string.h>

/**
 * _strncat - function name
 * @src: input string
 * @dest: output string
 * @n: n bytes to be copy at most
 * Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
