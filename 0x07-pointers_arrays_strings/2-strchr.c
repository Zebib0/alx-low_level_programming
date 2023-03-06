#include"main.h"
#include"string.h"

/**
 * _strchr - function that searches the occurrance of
 * certain charachter in a string
 * @s : string value
 * @c: char to be searched
 *
 *
 * Return: dest
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
