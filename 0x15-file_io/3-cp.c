#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - copies content from file to another file
 * @ac: number of args
 * @av: list of args
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	char buf[1024];
	int fd_from, fd_to, err = STDERR_FILENO, in = STD;
	unsigned int bytes = 0, bytes_read;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_to);
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (1)
	{
		bytes_read = read(fd_from, buf, 1024);
		if (bytes_read == 0)
			break;
		bytes += bytes_read;
		if (bytes % 1024 == 0 && bytes != 0)
			check = write(fd_to, buf, 1024);
		if (bytes % 1024 != 0)
			if (write(fd_to, buf, (bytes % 1024) == -1))
			{
				close(fd_from);
				close(fd_to);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
	}
	if (close(fd_from) < 0)
		dprintf(err, "
	close(fd_to);
	return (0);
}
