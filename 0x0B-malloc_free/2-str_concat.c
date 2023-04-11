#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code
 * @s1: string
 * @s2: string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int len1, len2;

	len1 = s1 == NULL ? 0 : strlen(s1);
	len2 = s2 == NULL ? 0 : strlen(s2);
	str = (char *)malloc(1 + sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; s2 != NULL && *(s2 + i) != '\0'; i++)
		*(str + len1 + i) = *(s2 + i);
	return (str);
}
