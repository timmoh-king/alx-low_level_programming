#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file -create a function that creates a file
 * @filename: the name of the file
 * @text_content: the datato be inputted
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, wr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	wr = write(fp, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fp);
	return (1);
}
