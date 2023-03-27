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
	int n = strlen(dest);

	strncpy(dest, src, n);
	return (dest);
}
