#include"main.h"
#include<ctype.h>
#include<string.h>
#include<stdbool.h>


/**
 * cap_string - converts lowercase letters to uppercase
 * @s : string value
 *
 * Return: return string with uppercase with uppercase
 * first letter.
 */

char *cap_string(char *s)
{
	int j, i;
	bool exp;

	j = strlen(s);
	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 0; i < j; i++)
	{
		exp = (s[i] == 32) || (s[i] == 44) || (s[i] == 40) ||
			(s[i] == 41) || (s[i] == 46) ||
			(s[i] == 33) || (s[i] == 63) || (s[i] == 59) ||
			(s[i] == 123) || (s[i] == 125) || (s[i] == 34);
		if (exp || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}

