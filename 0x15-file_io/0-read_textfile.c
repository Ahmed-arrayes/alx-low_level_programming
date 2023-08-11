#include "main.h"

/**
 * read_textfile - reads a text from a file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	_read = read(fd, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	close(fd);

	free(buffer);

	return (read);
}
