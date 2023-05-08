#include "main.h"
/**
 * read_textfile - Read text file to print to STDOUT.
 * @filename: Text file being read.
 * @letters: Number of letters to be read and print.
 * Return: The actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if file is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	free(buffer);
	close(fd);
	return (nwrite);
}
