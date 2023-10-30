#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and print
 * Return: the actual number of bytes read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t a;
	ssize_t b;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	return (0);

	b = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (a);
}
