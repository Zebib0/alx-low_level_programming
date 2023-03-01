#include"main.h"
#include<string.h>
/**
 * _strncat - concatinates two strings
 * @dest: String value
 * @src: String value
 * @n: the length of string taken from src
 *
 * Return: concatinated string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
