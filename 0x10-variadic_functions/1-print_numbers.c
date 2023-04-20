#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - check code
 * @separator: string
 * @n: constant integer
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		i++;
		if (i < n && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
