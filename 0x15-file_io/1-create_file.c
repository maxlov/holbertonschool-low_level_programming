#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - creates a file or truncates a file if already created
 * @filename: name of the file
 * @text_content: content of file
 *
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd, i;

	fd = open(filename, (O_RDWR | O_CREAT | O_TRUNC), 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; *(text_content + i) != '\0'; i++)
			len++;
		if ((write(fd, text_content, len)) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
