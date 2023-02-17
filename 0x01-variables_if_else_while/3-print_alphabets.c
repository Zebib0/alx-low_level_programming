#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Description - print all lowercase and uppercase alphabet
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;
	char ch_2;

	ch = 'a';
	ch_2 = toupper(ch);
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
		putchar(ch_2);
		ch_2++;
	}
	putchar('\n');

	return (0);
}
