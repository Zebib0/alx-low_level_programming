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
	int i;
	int j;
	j = strlen(str);
	for(i = 0; i < j; i++)
		str[i] = toupper(str[i]);
	return (str);
}
