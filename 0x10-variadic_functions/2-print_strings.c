#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - check code
 * @separator: string
 * @n: constant integer
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(ap, char *);
		printf("%s", s == NULL ? "(nil)" : s);
		i++;
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
