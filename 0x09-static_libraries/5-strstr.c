#include "main.h"

/**
 *_strstr - check code
 *@s:segment targeted
 *@needle: needle
 *
 *Return: string
 */
char *_strstr(char *s, char *needle)
{
	int condition, j;
	char *str = s;

	while (*str != '\0')
	{
		condition = 1;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != *(str + j))
			{
				condition = 0;
				break;
			}
		}
		if (condition == 1)
			return (str);
		str++;
	}
	return ('\0');
}
