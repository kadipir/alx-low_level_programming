#include "main.h"
/**
 * append_text_to_file - entry point
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int letters;
int w;

if (!filename)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content)
{
for (letters = 0 ; text_content[letters] ; letters++)

w = write(fd, text_content, letters);
if (w == -1)
{
return (-1);
}
}
close(fd);
return (1);
}
