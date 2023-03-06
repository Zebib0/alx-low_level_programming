#include"main.h"
#include<string.h>

unsigned int _strspn(char *s, char *accept)
{
	char l;
	l = strspn(s, accept);
	return (l);
}
