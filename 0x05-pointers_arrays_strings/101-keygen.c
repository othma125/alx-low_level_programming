#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 50;
	int i;
	time_t t;
	char c;

	srand((unsigned) time(&t));
	for(i = 0 ; i < n ; i++)
	{
		c = '!' + rand() % 94;
		printf("%c", c);
	}
	putchar('\n');
	return (0);
}
