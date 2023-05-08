#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: file name
 * @text: text to write
 * Return: success or failure
 */
int append_text_to_file(const char *filename, char *text)
{
	int len, of, wf;

	if (filename == NULL)
		return (-1);
	len = 0;
	while (text != NULL && text[len] != '\0')
		len++;
	of = open(filename, O_WRONLY | O_APPEND);
	wf = write(of, text == NULL ? "" : text, len);
	if (of < 0 || wf < 0)
		return (-1);
	close(of);
	return (1);
}
