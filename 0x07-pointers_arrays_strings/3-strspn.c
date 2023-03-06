#include"main.h"
#include<string.h>

/**
 * _strspn - prints the position of a charachter which is not
 * a member of the second string value.
 * @s : string value
 * @accept: string value
 *
 *
 * Return: pointer which contains
 *i value after the desired char
 */

unsigned int _strspn(char *s, char *accept)
{
	char l;

	l = strspn(s, accept);
	return (l);
}
