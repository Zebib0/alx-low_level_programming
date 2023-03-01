#include"main.h"
#include<string.h>
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
	int i, n;

	n = strlen(str);

	for (i = 0; i < n; i++)
	{
		*s = toupper((unsigned char) *s);
		s++;
	}
	return (s);
}
