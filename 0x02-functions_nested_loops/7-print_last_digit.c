#include"main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit of an integer
 * @i: the integer value
 * Return: 1 if success, else
 *
 *
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
