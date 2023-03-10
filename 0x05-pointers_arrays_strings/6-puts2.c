#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: string value.
 * Return: no return value.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
