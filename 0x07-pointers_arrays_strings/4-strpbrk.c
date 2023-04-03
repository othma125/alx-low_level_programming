#include "main.h"
#include <string.h>

/**
 *_strpbrk - check code
 *@s:segment targeted
 *@accept:reference bytes container
 *
 *Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
	char *str = s;

	for (; *str != '\0'; str++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *str)
				return (str);
		}
	}
	return ('\0');
}
