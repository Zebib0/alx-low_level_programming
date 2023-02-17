#include <stdio.h>

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
	ch_2 = 'A';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch_2 <= 'Z')
	{
		putchar(ch_2);
		ch_2++;
	}
	putchar('\n');
	return (0);
}
