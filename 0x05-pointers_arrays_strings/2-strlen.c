#include "main.h"

/**
 * _strlen - function name
 * @s: input string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
