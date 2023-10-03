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
	size_t bread, bwrite;
	int fd;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bread = read(fd, buffer, letters);
	bwrite = write(STDOUT_FILENO, buffer, bread);
	free(buffer);
	close(fd);
	return (bwrite);
}
