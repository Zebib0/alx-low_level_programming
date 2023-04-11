#include "main.h"
#include<stdlib.h>
/**
 * read_textfile - a function which reads a text file
 * and print it to posix standars output.
 *
 * @filename : name of the file.
 * @letters : the number of letters the
 * function should read and print.
 * Return: number of bytes can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);
	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(op);
	return (wr);
}
