#include "main.h"
/**
 * read_textfile - read a text file and print it to standard output
 * @filename: filename.
 * @letters: numbers of letters it should read and print.
 *
 * Return: returns 0 if file cannot be opened or read.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t nwr, nrd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nwr = write(STDOUT_FILENO, buffer, nrd);
	nrd = read(fn, buffer, letters);

	free(buffer);
	close(fn);
	return (nwr);
}
