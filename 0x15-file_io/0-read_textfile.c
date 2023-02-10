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
	ssize_t fp, rd;
	char *buff;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY, 0600);

	if (fp == -1)
		return (0);

	buff = malloc(letters * sizeof(char *));

	if (buff == NULL)
		return (0);

	rd = read(fp, buff, letters);
	write(STDIN_FILENO, buff, rd);

	free(buff);
	close(fp);

	return (rd);

}
