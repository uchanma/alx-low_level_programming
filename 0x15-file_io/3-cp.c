#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: argument vector
 *
 * Return: no return.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "ERROR: can't read from file %s\n", argv[1]);
	exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to ampther file.
 * @argc: numbers of arguments passed.
 * @argv: arguments vecotors.
 *
 * Return: returns 0 on success.
 */

int main(int argc, char *argv[])
{
	int file_to, file_from, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	file_from = open(argv[1], O_RDONLY);

	check98((ssize_t)file_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, file_perm);
	check99((ssize_t)file_to, argv[2], file_from, -1);
	lenr = 1024;

	while (lenr == 1024)
	{
		lenr = read(file_from, buffer, 1024);
		check98(lenr, argv[1], file_to, file_from);
		lenw = write(file_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], file_to, file_from);
	}

	close_to = close(file_to);
	close_from = close(file_from);

	check100(close_to, file_to);
	check100(close_from, close_from);

	return (0);
}
