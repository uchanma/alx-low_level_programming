#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename.
 * @text_content: contents of the texts.
 *
 * Return: returns 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(O_WRONLY | O_APPEND, filename);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
                return (-1);
	}

	close(fd);

	return (1);
}
