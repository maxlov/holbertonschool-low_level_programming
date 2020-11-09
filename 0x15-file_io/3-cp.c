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
	char *buf;
	int fd_from, fd_to, check;
	unsigned int bytes = 0, bytes_read;
	ssize_t flag = 0;

	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(1024);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		free(buf);
		close(fd_from);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_to);
		close(fd_from);
		free(buf);
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while (flag != -1)
	{
		bytes_read = read(fd_from, buf, 1024);
		if (bytes_read == 0)
		{
			flag = -1;
			continue;
		}
		bytes += bytes_read;
		if (bytes % 1024 == 0 && bytes != 0)
			check = write(fd_to, buf, 1024);
		if (bytes % 1024 != 0)
			check = write(fd_to, buf, (bytes % 1024));
		if (check == -1)
		{
			close(fd_from);
			close(fd_to);
			free(buf);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);
	free(buf);

	return (0);
}
