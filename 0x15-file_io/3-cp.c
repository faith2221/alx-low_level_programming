#include "main.h"
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 1 on success, exit otherwise.
 */

int main(int argc, char *argv[])
{
	int src, dest, close_src, close_dest, rd = 1024, wr;
	unsigned int md = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: copy file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, md);
	check_IO_stat(dest, -1, argv[2], 'W');

	while (rd == 1024)
	{
		rd = read(src, buf, sizeof(buf));
		if (rd == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wr = write(dest, buf, rd);
		if (wr == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');

	return (0);
}

/**
 * check_IO_stat - Checks if a file can be opened or closed.
 * @stat: File descriptor of the file to be opened.
 * @filename: Filename.
 * @md: The closing or opening.
 * @fd: The file descriptor to be closed.
 * Return: Nothing.
 */

void check_IO_stat(int stat, int fd, char *filename, char md)
{
	if (md == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (md == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (md == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
