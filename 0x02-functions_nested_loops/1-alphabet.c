#include "main.h"
/**
 * print_alphabet - Entry point
 * Description =to print alphabet letters
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
