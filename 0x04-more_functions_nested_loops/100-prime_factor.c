#include <stdio.h>

/**
 * _isprime - check if an integer is prime
 * @n: input number
 * Return: true or false
 */
int _isprime(long int n)
{
	int i, flag = 1;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}
/**
 * main - largest prime decomposition of an integer
 * Return: successful
 */
int main(void)
{
	long int n = 612852475143;
	int i, j = 0;

	for (i = n / 2; i >= 2 ; i--)
	{
		if (n % i == 0 && _isprime(i) == 1)
		{
			printf("%d\n", i);
			j = i;
			break;
		}
	}
	if (j == 0)
		printf("%ld\n", n);
	return (0);
}
