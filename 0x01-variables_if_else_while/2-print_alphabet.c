#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description - return a lower case character
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
