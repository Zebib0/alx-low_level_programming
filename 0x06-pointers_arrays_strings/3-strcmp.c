#include"main.h"
#include<string.h>

/**
 * _strcmp - compares two strings
 * @s1: String value
 * @s2: String value
 *
 * Return: returns 0 if the strings are equal
 * returns postive number if the first string is greater
 * returns negative number if the second string is greater
 */

int _strcmp(char *s1, char *s2)
{
	int value;

	value = strcmp(s1, s2);
	return (value);
}
