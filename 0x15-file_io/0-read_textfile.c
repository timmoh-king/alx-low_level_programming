#include <stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be checked
 * @letters: the number and size of bits to be printed
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY, 0600);

	if (fp == -1)
		return (0);

	buff = malloc(letters * sizeof(char *));

	rd = read(fp, buff, letters);
	wr = write(STDIN_FILENO, buff, rd);

	if (rd == -1 || wr == -1)
		return (0);

	free(buff);
	close(fp);
}
