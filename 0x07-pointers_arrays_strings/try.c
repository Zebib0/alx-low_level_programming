#include<stdio.h>
#include<string.h>

unsigned int fun(char *s, char *accept);

int main(void)
{
	char *s = "whello5, worldh";
	char *f = "oleh5";
	unsigned int n;
	
	n = fun(s, f);
	printf("%u\n", n);
	return (0);
}

unsigned int fun(char *s, char *accept)
{
        char l;

        l = strspn(s, accept);
        return (l);
}

