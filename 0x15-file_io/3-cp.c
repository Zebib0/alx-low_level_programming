#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void print_error(char *msg, char *filename, int fd) {
    dprintf(STDERR_FILENO, msg, filename, fd);
}

int main(int argc, char *argv[]) {
	int fd_to, fd_from;
	char *file_from, *file_to;

    if (argc != 3) {
        print_error("Usage: cp file_from file_to\n", NULL, 0);
        exit(97);
    }
    *file_from = argv[1];
    *file_to = argv[2];
    fd_from = open(file_from, O_RDONLY);
    if (fd_from < 0) {
        print_error("Error: Can't read from file %s\n", file_from, fd_from);
        exit(98);
    }
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to < 0) {
        print_error("Error: Can't write to %s\n", file_to, fd_to);
        close(fd_from);
        exit(99);
    }
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            print_error("Error: Can't write to %s\n", file_to, fd_to);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }
    if (bytes_read < 0) {
        print_error("Error: Can't read from file %s\n", file_from, fd_from);
        close(fd_from);
        close(fd_to);
        exit(98);
    }
    if (close(fd_from) < 0) {
        print_error("Error: Can't close fd %d\n", NULL, fd_from);
        close(fd_to);
        exit(100);
    }
    if (close(fd_to) < 0) {
        print_error("Error: Can't close fd %d\n", NULL, fd_to);
        exit(100);
    }
    return 0;
}
