#include "main.h"

/**
 * close_file - close file
 * @fd: file to close
 */

void close_file(fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * create_puffer - allocate 1024 for a buffer
 * @file: the name of the file buffer is sotring chars for
 *
 * Return: a pointer to new buffer allocation
 */

char *create_puffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_to, file_from, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_puffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
			exit(98);
			free(buffer);
		}
		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
			free(buffer);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
		w = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
