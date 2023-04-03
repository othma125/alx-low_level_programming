#include "main.h"

/**
 * _strchr - check code
 * @s: string
 * @c: the char to check occurence
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	char *buffer = s;

	while (*buffer != '\0')
	{
		if (*buffer == c)
			return (buffer);
		buffer++;
	}
	return (0);
}
