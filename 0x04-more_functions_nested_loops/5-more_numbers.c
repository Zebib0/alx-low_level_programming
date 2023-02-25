#include "main.h"

/**
 * more_numbers - nmbr fct
 *
 * Return: no return
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		int j;
		for (j = 0; j < 14; j++)
		{
			_putchar('1');
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
