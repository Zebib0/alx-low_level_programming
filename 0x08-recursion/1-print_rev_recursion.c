#include"main.h"
#include<string.h>
/**
 * _print_rev_recursion - print string in reverse
 * @s: a string to be printed
 * Return: no return value
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
