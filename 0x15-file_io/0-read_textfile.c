#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);
	return (bytes_written);
}
