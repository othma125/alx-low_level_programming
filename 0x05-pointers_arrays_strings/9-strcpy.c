#include "main.h"

/**
 * _strcpy - function name
 * @src: input string
 * @dest: output string
 * Return: new string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
