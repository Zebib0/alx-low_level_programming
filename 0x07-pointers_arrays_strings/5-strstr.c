#include"main.h"
#include<string.h>

/**
 * _strstr - prints the substring
 * @haystack : string value
 * @needle: string value
 *
 * Return: pointer containing the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
}
