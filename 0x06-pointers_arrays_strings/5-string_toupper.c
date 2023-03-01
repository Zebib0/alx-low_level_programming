#include"main.h"
#include<ctype.h>

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
