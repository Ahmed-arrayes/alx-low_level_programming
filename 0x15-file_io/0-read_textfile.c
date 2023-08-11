#include "main.h"

/**
*read textfile function that reads a
*text file and prints it to the POSIX standard output.
*@filename: filename
*@letters: number of letters to print
*Return: Number of letters || e
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
