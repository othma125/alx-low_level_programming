#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * close_file - check code
 * @of: opened file
 * Return: none
 */
void close_file(int of)
{
	if (close(of) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", of);
		exit(100);
	}
}
/**
 * main - check the code
 * @ac: arguments count
 * @av: arguments set
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	char *txt;
	int input, output, rf, wf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	txt = malloc(1024);
	if (txt == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	input = open(av[1], O_RDONLY);
	output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rf = read(input, txt, 1024);
	do {
		if (input < 0 || rf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(txt);
			exit(98);
		}
		wf = write(output, txt, rf);
		if (output < 0 || wf < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(txt);
			exit(99);
		}
		rf = read(input, txt, 1024);
		output = open(av[2], O_WRONLY | O_APPEND);
	} while (rf > 0);
	free(txt);
	close_file(input);
	close_file(output);
	return (0);
}
