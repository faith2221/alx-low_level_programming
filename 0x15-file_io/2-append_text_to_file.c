#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Filename.
 * @text_content: Added content.
 * Return: 1 on success, and -1 on failure
 * or 1 if file exists and -1 if the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int nletters = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, nletters);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
