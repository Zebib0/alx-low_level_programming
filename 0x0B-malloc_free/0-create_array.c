#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function to dynamically create an array size of size
 * @size: the size of an array
 * @c: a character to memset the memory address
 * Return: if dynamically allocation successfully allocated
 * it returns the char pointer to the first address else it return Null
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
	free(str);
}
