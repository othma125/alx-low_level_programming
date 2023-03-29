#include "main.h"
#include <string.h>

/**
 * _strcmp - function name
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (strlen(s1) == strlen(s2))
		return (0);
	return (s1[i] - s2[i]);
}
