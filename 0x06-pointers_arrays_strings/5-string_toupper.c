#include"main.h"
#include<ctype.h>

/**
 * string_toupper - converts lowercase letters to uppercase
 * @str : string value
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	char *s = str;

	while (*s)
	{
		*s = toupper((unsigned char) *s);
		s++;
	}
	return (s);
}
