#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - reads and writes text file
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: number of chars written or 0 if failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buff;
	ssize_t bytes;
	size_t letters_actual;

	file_descriptor = open(filename, O_RDONLY);
	if (filename == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_descriptor);
		free(buff);
		return (0);
	}

	letters_actual = read(file_descriptor, buff, letters);
	if (file_descriptor == -1)
	{
		close(file_descriptor);
		free(buff);
		return (0);
	}

	close(file_descriptor);
	bytes = write(STDOUT_FILENO, buff, letters_actual);
	write(1, '\0', 1);
	free(buff);
	if (bytes == -1)
		return (0);

	return (bytes);
}
