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

	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	ssize_t bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
		close(fd);
	return (-1);

	close(fd);
	return (1);
}
