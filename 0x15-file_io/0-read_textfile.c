#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - check the code
 * @filename: file name
 * @n: letters count
 * Return: read letters count
 */
ssize_t read_textfile(const char *filename, size_t n)
{
	ssize_t of, rf, wf;
	char *output;

	if (filename == NULL || n == 0)
		return (0);
	output = malloc(n);
	if (output == NULL)
		return (0);
	of = open(filename, O_RDONLY);
	rf = read(of, output, n);
	wf = write(STDOUT_FILENO, output, rf);
	if (of < 0 || rf < 0 || wf < 0 || rf != wf)
	{
		free(output);
		return (0);
	}
	free(output);
	close(of);
	return (n);
}
