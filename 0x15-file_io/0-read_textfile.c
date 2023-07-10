#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename:it represents the poiner to the name of the file
 * @letters: number of letters
 * Return: 0 if filename os NULL, if the file canno be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t byte_read, byte_written;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}
	byte_read = read(fd, buf, letters);
	if (byte_read != letters)
	{
		free(buf);
		close(fd);
		return (0);
	}
	byte_written = write(STDOUT_FILENO, buf, byte_read);
	free(buf);
	close(fd);
	return ((byte_written == byte_read) ? byte_read : 0);
}
