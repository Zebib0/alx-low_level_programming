#include <stdio.h>

/**
 * main - Entry point
 * Description - print all lowercase and uppercase alphabet
 * Return: always 0 (success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
		continue;
		putchar(ch);
		ch++;
		}
	}
	putchar('\n');
	return (0);
}
