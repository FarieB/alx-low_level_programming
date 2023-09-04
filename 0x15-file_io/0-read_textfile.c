#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*read_textfile- reads a text file and prints it to the POSIX
*@filename: pointer
*@letters: size of letters to be read
*Return: number of letters it could read and print
*	0 if the file can not be opened or read
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buffer;
	int file_descriptor;
	ssize_t bytes_written = 0;
	ssize_t bytes_read;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
