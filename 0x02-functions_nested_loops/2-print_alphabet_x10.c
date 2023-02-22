#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description - The program displays all letters in lower case
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
