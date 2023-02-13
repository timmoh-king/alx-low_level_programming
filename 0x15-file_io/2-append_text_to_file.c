#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end
 * @filename: the name of the file
 * @text_content: the data to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wr;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_APPEND | O_WRONLY);

	if (fp == -1 && !text_content)
		return (-1);

	if (fp > 0 && !text_content)
		return (1);

	wr = write(fp, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fp);

	return (1);
}
