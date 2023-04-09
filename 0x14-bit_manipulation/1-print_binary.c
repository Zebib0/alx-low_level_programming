#include "main.h"
unsigned long int reverse_number(unsigned long int n);
/**
 * print_binary - converts decimal to binary representaion
 * @n: decimal number to converted to binary
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int flag;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (i = sizeof(n) * 8 - 1, flag = 0; i >= 0; i--)
	{
		if ((n >> i) & 1)
			flag = 1;
		if (flag == 1)
			((n >> i) & 1) ? printf("%c", '1') : printf("%c", '0');
	}
}
