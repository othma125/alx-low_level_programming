#include <stdio.h>

/**
 * _isprime - check if an integer is prime
 * @n: input number
 * Return: true or false
 */
int _isprime(int n)
{
	int i, flag = 1;

	for (i = 2; i <= n / 2; ++i)
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
	int i;
	long n = 612852475143;

	for (i = (int) sqrt(n); i > 2; i++)
	{
		if (n % i == 0 && _isprime(i))
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
