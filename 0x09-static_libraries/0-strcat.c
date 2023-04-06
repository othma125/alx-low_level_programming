#include "main.h"
#include <string.h>

/**
 * _strcat - function name
 * @src: input string
 * @dest: output string
 * Return: new string
 */
char *_strcat(char *dest, char *src)
{
	int n = strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = '\0';
	return (dest);
}
