#include"main.h"
/**
 * print_numbers - display nunmber fron 0-9
 *
 *
 * Return: no return value(void)
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
