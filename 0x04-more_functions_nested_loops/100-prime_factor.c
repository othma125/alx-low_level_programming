#include <stdio.h>

/**
 * _isprime - check if an integer is prime
 * @n: input number
 * Return: true or false
 */
int _isprime(long int n)
{
	long int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
/**
 * main - largest prime decomposition of an integer
 * Return: successful
 */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = n / 2; i >= 2; i--)
	{
		if (n % i == 0 && _isprime(i))
		{
			printf("%ld\n", i);
			break;
		}
	}
	return (0);
}
