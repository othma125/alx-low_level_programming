#include "main.h"
#include <string.h>

/**
 * _strncpy - function name
 * @src: input string
 * @dest: output string
 * @n: n bytes to be copy at most
 * Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n == strlen(dest))
		dest[i] = '\0';
	return (dest);
}
