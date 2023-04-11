#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check the code
 * @str: stringr
 * Return: array pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * strlen(str));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(new_str + i) = *(str + i);
	return (new_str);
}
