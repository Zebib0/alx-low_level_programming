#include "main.h"
/**
 * print_alphabet - function to print alphabets
 * 
 * Description - The program displays all letters in lower case
 * Return : no return type 
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
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
