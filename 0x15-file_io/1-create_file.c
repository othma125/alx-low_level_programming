#include "main.h"
#include <string.h>

/**
 * create_file - check the code
 * @filename: file name
 * @text: text to write
 * Return: success or failure
 */
int create_file(const char *filename, char *text)
{
	ssize_t of, wf;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wf = write(of, text == NULL ? "" : text, text == NULL ? 0 : strlen(text));
	if (of < 0 || wf < 0)
		return (-1);
	close(of);
	return (1);
}
