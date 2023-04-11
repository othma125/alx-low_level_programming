#include <stdlib.h>
#include <string.h>

/**
 * argstostr - check the code
 * @argc: integer
 * @argv: set of string
 * Return: string
 */
char *argstostr(int argc, char *argv[])
{
	char *str;
	int i;
	int len;
	int j;

	if (argc == 0 || argv == NULL)
		return (NULL);
	i = 0;
	len = 0;
	do {
		len += strlen(argv[i]);
		i++;
	} while (i < argc);
	str = (char *)malloc(i + 1 + len);
	if (str == NULL)
		return (NULL);
	i = 0;
	len = 0;
	do {
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			*(str + len) = *(argv[i] + j);
			len++;
		}
		*(str + len) = '\n';
		len++;
		i++;
	} while (i < argc);
	return (str);
}
