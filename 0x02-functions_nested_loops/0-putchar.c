#include<stdio.h>


/**
 * main - Entry point
 i*
 * Return: Always 0.
 */
int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		if (ch[i] != '\0')
		{
			putchar(ch[i]);
		}
		i++;

	}
	putchar('\n');
	return (0);
}
