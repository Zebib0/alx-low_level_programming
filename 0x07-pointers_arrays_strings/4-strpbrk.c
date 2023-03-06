#include"main.h"
#include<string.h>
/**
 * _strpbrk - prints the position of a charachter which is not
 * a member of the second string value.
 * @s : string value
 * @accept: string value
 *
 * Return: returns the strings which are the
 * same as the member of the second strings
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
