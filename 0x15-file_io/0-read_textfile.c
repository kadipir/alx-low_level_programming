#include "main.h"

/**
 * read_textfile - entry point
 * @filename: name of file
 * @letters: number of characters
 * Return: number of letters to be read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t lr, lw;
char  *buffer;

if (!filename)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = malloc(sizeof(char) * letters);
if (buffer)
{
close(fd);
return (0);
}
lr = read(fd, buffer, letters);
close(fd);
if (lr == -1)
{
free(buffer);
return (0);
}
lw = write(STDOUT_FILENO, buffer, lr);
free(buffer);
if (lr != lw)
{
return (0);
}
return (lw);
}


