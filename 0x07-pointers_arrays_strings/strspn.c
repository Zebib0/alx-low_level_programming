#include<stdio.h>
#include<string.h>
unsigned int _strspn(char *s, char *accept);

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n, k;

	n = strlen(s);
	k = strlen(accept);

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < k; j++)
		{
			if (s[0] != accept[j])
				return(0);
			else if (s[0] == accept[j])
					{
						i = i + 1;
						if (s[i] != s[j])
						{
							break;
						}
					}
		}
		 return (i);
	}
}
