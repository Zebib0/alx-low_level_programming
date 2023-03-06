#include"main.h"
#include<string.h>
/**
 * _memcpy - copies the memory area
 * @src : value to be copied
 * @dest: destinatio which the copied values are stored
 * @n: size
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
