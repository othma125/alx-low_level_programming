#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;

	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit == 0)
	{
		printf("0\n");
	}
	else if (last_digit > 5)
	{
		printf("great than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
