#include "main.h"
/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwr, nletters = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	rwr = write(fd, text_content, nletters);

	if (fd == -1 || rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
