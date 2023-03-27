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
	int i = 0, n = strlen(dest);

	while (*(src + i) != '\0')
	{
		dest[i + n] = src[i];
		i++;
	}
	return (dest);
}
