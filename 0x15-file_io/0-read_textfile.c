#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters printed.
 *
 * Return: number of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t nrd, nwr;

	if (!filename)
		return (0);

	file = fopen(filename, "r");
	if (!file)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	nrd = fread(buffer, sizeof(char), letters, file	nwr = fwrite(buffer, sizeof(char), nrd, stdout);

	fclose(file);
	free(buffer);

	return nwr;
}
