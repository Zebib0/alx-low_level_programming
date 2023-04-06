#include"main.h"
#include<string.h>
#include<math.h>
/**
 * binary_to_uint - converts binary to unsigned interger
 * @b: String of binary digits to be converted 
 *
 * Return: integers
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalnum = 0, p = 0;
	int size = 0, i;

	size = strlen(b);
	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		decimalnum = decimalnum + pow(2, p);
		p++;
	}
	return decimalnum;
}
