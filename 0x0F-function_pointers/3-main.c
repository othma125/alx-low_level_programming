#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *op;
	int (*f)(int, int);

	if (argc != 4)
		exit(98);
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	do {
		f = get_op_func(op);
		op++;
	} while (f == NULL && *op != '\0');
	if (f == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
