#include"main.h"
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


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
		bool exp = exp = (str[i] == 32) || (str[i] == 44) || (str[i] == 40) ||
			 (str[i] == 41) || (str[i] == 46) ||
			 (str[i] == 33) || (str[i] == 63) || (str[i] == 59) ||
			 (str[i] == 123) || (str[i] == 125) || (str[i] == 34);
		if (str[i] == '\n' || str[i] == '\t')
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else if (exp)
		{
			str[i + 1] = toupper(str[i + 1]);
		}
		else
		{
		}
	}
	return (str);
}
