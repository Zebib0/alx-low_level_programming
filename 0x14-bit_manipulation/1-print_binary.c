#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to decimal
 * @n: a decimal value
 * Return: null
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int m;
	int f;
	f = sizeof(unsigned long int) * 8 - 1;

	for (i = f; i >= 0; i--)
	{
		m = 1UL << i;
		if (n & m)
			_putchar('1');
		else
			_putchar('0');
	}
}
