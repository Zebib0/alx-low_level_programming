#include"main.h"
#include<string.h>
/**
 * _memset - function fills the first n bytes of the memory area
 * @s : string value
 * @b: charachter used to fill the spaces
 * @n: size
 *
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
