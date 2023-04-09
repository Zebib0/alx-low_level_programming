#include "main.h"
unsigned long int reverse_number(unsigned long int n);
/**
 * print_binary - converts decimal to binary representaion
 * @n: decimal number to converted to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary = n;
	int i = 0;

	while (binary > 0)
	{
		binary = binary >> 1;
		i++;
	}
	for(;i >= 0; i--)
	{
		if((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
}
