#include "main.h"
#include <string.h>

/**
 * _strcpy - function name
 * @src: input string
 * @dest: output string
 * Return: new string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	dest[strlen(src)];
	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
