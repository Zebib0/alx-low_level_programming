#include"main.h"
#include<string.h>

char *rot13(char *str)
{
	int i;
	int n;

	n = strlen(str);
		for(i = 0; i <= n; i++)
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
			}
			else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			{
				str[i] = str[i] - 13;
			}
		}
	return(str);
}
