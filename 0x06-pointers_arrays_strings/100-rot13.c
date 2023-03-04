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
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
			}
		}
	return (str);
}
