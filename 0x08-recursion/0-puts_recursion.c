#include"main.h"
/**
 * _puts_recursion - recursively prints out a string
 * @s: a string to be printed
 * Return: no return value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
