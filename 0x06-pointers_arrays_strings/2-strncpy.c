#include "main.h"

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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n && src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
