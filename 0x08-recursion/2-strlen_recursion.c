#include"main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: a string value
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s != '\0')
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n);
}
