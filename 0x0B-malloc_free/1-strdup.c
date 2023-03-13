#include"main.h"
#include<stdlib.h>
#include<string.h>

/**
 * *_strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string value
 * Return: if dynamically allocation successfully allocated
 * it returns the char pointer to the first address else it return Null
 */

char *_strdup(char *str)
{
	int size, i;
	char *ch;

	size = strlen(str);
	ch = malloc(sizeof(char) * size + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = str[i];
	}
	return (ch);
	free(ch);
}
