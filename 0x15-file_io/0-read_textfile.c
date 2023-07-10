#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename:it represents the poiner to the name of the file
 * @letters: number of letters
 * Return: 0 if filename os NULL, if the file canno be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f = fopen(filename, "r");
	char *buff;
	ssize_t bytes_read, byte_written;

	if (filename == NULL)
		return (0);
	if (f == NULL)
		return (0);
	/**
	 * Malloc creates memory to hold
	 * the text read from the file.
	 */
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		fclose(f);
		return (0);
	}
	/**
	 * function fread() is used to read the file
	 * and put it on the space prepared before(buff)
	 * byte_read counts the number of letters that are being read.
	 */
	bytes_read = fread(buff, 1, letters, f);
	buff[bytes_read] = '\0';
	byte_written = fwrite(buff, 1, bytes_read, stdout);
	if (byte_written != bytes_read)
	{
		fclose(f);
		free(buff);
		return (0);
	}
	fclose(f);
	free(buff);
	return (bytes_read);
}
