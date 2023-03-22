#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: the string parameter
 * @f: pointer to function that takes a char * as a parameter and returns void
 *
 * Return: nothing (void)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || f)
	f(name);
}
