#include"main.h"
#include<string.h>

/**
 * _strncpy - copies the value of src to dest
 * @dest: String value
 * @src: String value
 * @n: the length of string copied from src
 *
 * Return: concatinated string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
