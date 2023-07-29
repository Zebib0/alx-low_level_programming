#include"main.h"

/**
 * cp - a function which copies a file content to another file
 * @file_form: source file
 * @file_to: function which file is copied to
 * Return: -1 on failure and 1 on success
 */
void cp(char *file_form, char *file_to)
{
	int fd_read, fd_write;
	ssize_t n_read, n_written;
	char **buf;

	buf = malloc(sizeof(char *) * 1024);
	if (buf == NULL)
	{
		perror("Error: memory allocation failed");
		exit(EXIT_FAILURE);
	}

	fd_read = open(file_form, O_RDONLY);
	if (fd_read == -1)
	{
		perror("Error: cannot open source file");
		exit(98);
	}
	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_write == -1)
	{
		close(fd_read);
		perror("Error: cannot open source file");
		exit(98);
	}
	while ((n_read = read(fd_read, buf, 1024)) > 0)
	{
		n_written = write(fd_write, buf, n_read);
		if (n_written != n_read)
		{
			perror("Error: Error");
			exit(EXIT_FAILURE);
		}
		if (n_read == -1)
		{
			perror("Error: Error");
			exit(EXIT_FAILURE);
		}
		free(buf);
		close(fd_read);
		close(fd_write);
	}
}
/**
 * main - Entry point
 * @ac: argument count
 * @av: arguments
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);
	return (0);
}
