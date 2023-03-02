#include"main.h"
#include<ctype.h>
#include<string.h>


/**
 * cap_string - converts lowercase letters to uppercase
 * @str : string value
 *
 * Return: return string with uppercase with uppercase
 * first letter.
 */

char *cap_string(char *str)
{
	int i;
	int j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	{
		if (str[i] == '\n' || str[i] == '\t')
		{
			i++;
			str[i] = toupper(str[i]);
		}
		else if (str[i] == ' ' || str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			i++;
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
