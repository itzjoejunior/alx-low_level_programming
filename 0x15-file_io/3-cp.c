#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Duplicates the content of one file into another file
 * @argc: The count of arguments provided to the program
 * @argv: An array of argument pointers.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])

{
	int fd_r, fd_w, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fd_r, buf, BUFSIZ)) > 0)
	{
	if (fd_w < 0 || write(fd_w, buf, a) != a)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fd_r);
	exit(99);
	}
	}
	if (a < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	b = close(fd_r);
	c = close(fd_w);
	if (b < 0 || c < 0)
	{
	if (b < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
	if (c < 0)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
	exit(100);
	}
	return (0);
}
