#include "main.h"
#include<stdlib.h>
/**
 * append_text_to_file - a function which appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content : string to the write to the file
 * Return: -1 if null occurs, else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND, 0600);
	wr = write(op, text_content, len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
