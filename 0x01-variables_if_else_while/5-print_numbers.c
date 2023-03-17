#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	do {
		printf("%d", n);
		n++;
	} while (n < 10);
	putchar('\n');
	return (0);
}
