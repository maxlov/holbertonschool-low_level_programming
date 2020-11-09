#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content of file
 *
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fd, i;

	fd = open(filename, (O_RDWR | O_APPEND));
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
