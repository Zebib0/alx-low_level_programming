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
		if (i == 0)
			str[0] = toupper(str[i]);
		{
			int space;

			for (space = 0; space < j; space++)
			{
				if (str[i] == ' ')
				{
					i++;
					str[i] = toupper(str[i]);
				}
				space++;
			}
		}
		if (str[i] == '\n')
		{
			i++;
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
