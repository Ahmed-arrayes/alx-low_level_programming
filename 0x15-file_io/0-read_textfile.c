#include "main.h"

/**
 * read_textfile - reads a text from a file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read textfile(const char *filename, size_t letters)
{
        int fd;
    ssize_t read, write;
    char *buffer;
    if (!filename)
    (
    }
    return (0);
    /"open file"/
    fd = open(filename, O_RDONLY);
        if (fd == -1)
        return (0);


    buf = malloc(sizeof(char) letters);
    if (buffer == NULL)
        return (0);

    _read = read(fd, buffer, letters);
    if (read == -1)
    (
        free(buffer);
        close(fd);
        return (0);

    _write = write(STDOUT FILENO, buffer, read);
    if (write == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }
    close(fd);
    return (read);
}
