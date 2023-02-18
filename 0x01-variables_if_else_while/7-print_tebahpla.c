#include <stdio.h>

/**
 * main - Entry point
 * Description - print alphabet in reverse order
 * Return: always 0 (success) lowercase letters
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
