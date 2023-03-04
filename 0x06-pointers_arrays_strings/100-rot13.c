#include"main.h"
#include<string.h>

/**
 * rot13 - encodes a string using rot13
 * @str : string value
 *
 * Return: str
 */


char *rot13(char *str)
{
	int i;
	int n;

	n = strlen(str);
		for (i = 0; i <= n; i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
		}
		return (str);
}
