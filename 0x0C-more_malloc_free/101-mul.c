#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * correct_number - function name
 * @s: input string
 * Return: integer
 */
int correct_number(char *s)
{
	int negative = 0, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0 && s[i] == '-')
		{
			negative = 1;
			continue;
		}
		if (s[i] > '9' || s[i] < '0')
			return (0);
	}
	return (negative ? -1 : 1);
}
/**
 * infinite_add - check the code
 * @n1: first number
 * @n2: second number
 * Return: the sum or 0 if there is an error.
 */
char *infinite_add(char *n1, char *n2)
{
	unsigned int len1 = strlen(n1), len2 = strlen(n2);
	int k, i = len1 - 1, j = len2 - 1, a, b, n = 0, size, sum, aux;
	char *r;

	if (n1 == NULL || strcmp(n1, "0") == 0)
		return (n2);
	if (n2 == NULL || strcmp(n2, "0") == 0)
		return (n1);
	size = len1 > len2 ? len1 : len2;
	size++;
	if (len1 == len2)
		size++;
	r = (char *)malloc(size * sizeof(char));
	if (r == NULL)
		return (NULL);
	while (i >= 0 || j >= 0)
	{
		a = i < 0 ? 0 : n1[i] - '0';
		b = j < 0 ? 0 : n2[j] - '0';
		sum = a + b + n;
		n = sum / 10;
		r[k] = '0' + sum % 10;
		k++;
		i--;
		j--;
	}
	if (n > 0)
	{
		r[k] = '0' + n;
		k++;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		aux = *(r + i);
		*(r + i) = *(r + j);
		*(r + j) = aux;
	}
	return (r);
}
/**
 * multiplication - check the code
 * @n1: first number
 * @n2: second number
 * Return: string
 */
char *multiplication(char *n1, char *n2)
{
	int n = 0, i, j, k;
	char zero[] = "0", *r = zero, *y;

	if (strlen(n1) > strlen(n2))
		return (multiplication(n2, n1));
	if (strcmp(n1, "0") == 0 || strcmp(n2, "0") == 0)
		return ("0");
	if (strcmp(n1, "1") == 0)
		return (n2);
	if (strcmp(n2, "1") == 0)
		return (n1);
	for (i = strlen(n1) - 1; i > -1; i--)
	{
		y = zero;
		k = n1[i] - '0';
		if (k != 0)
		{
			for (j = 0; j < k; j++)
				y = infinite_add(y, n2);
			for (j = 0; j < n; j++)
				y = strcat(y, "0");
			r = infinite_add(r, y);
		}
		n++;
	}
	free(y);
	return (r);
}
/**
 * main - check code
 * @argc: arguments count
 * @argv: arguments set
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n1, n2, sign;
	char *r, *s1 = argv[1], *s2 = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = correct_number(argv[1]);
	n2 = correct_number(argv[2]);
	if (!n1 || !n2)
	{
		printf("Error\n");
		return (1);
	}
	if (n1 < 0)
		s1++;
	if (n2 < 0)
		s2++;
	sign = (n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0);
	r = multiplication(s1, s2);
	if (!sign && strcmp(r, "0") != 0)
		printf("-");
	printf("%s\n", r);
	return (0);
}
