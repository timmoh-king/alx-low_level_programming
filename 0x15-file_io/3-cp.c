#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * err_arg - if the number of arguments is less than expected
 */
void err_arg(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * err_read - if the file cannot be read
 * @read: takes in the read read variable
 */
void err_read(char *read)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", read);
	exit(98);
}
/**
 * err_write - if the file cannot be written
 * @write: the file to be checked
 */
void err_write(char *write)
{
	dprintf(STDERR_FILENO, "Error: can't write to %s\n", write);
	exit(99);
}
/**
 * file_close - if the file cannot close
 * fp: the filename
 */
void file_close(int fp)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
	exit(100);
}
int main (int argc, char *argv[])
{
	int src, dest, wr, rd, fp;
	char buff[1024];

	if (argc != 3)
		err_arg();

	src = open(argv[1], O_RDONLY);

	if (src == -1)
		err_read(argv[1]);

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest == -1)
		err_write(argv[2]);

	rd = read(src, buff, 1024);

	if (rd == -1)
		err_read(argv[1]);

	while (rd)
	{
		wr = write(dest, buff, rd);
		if (wr == -1 || wr != rd)
			err_write(argv[2]);
	}

	fp = close(src);
	if (fp == -1)
		file_close(src);

	fp = close(dest);
	if (fp == -1)
		file_close(dest);

	return (0);
}
