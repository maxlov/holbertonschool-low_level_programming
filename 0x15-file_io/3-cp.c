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
	char *file_from, *file_to, *buf;
	int fd_from, fd_to, check;
	unsigned int bytes = 0, bytes_read;
	ssize_t flag = 0;

	buf = malloc(1024);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		close(fd_from);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	file_to = av[2];
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);

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
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);
	free(buf);

	return (0);
}
