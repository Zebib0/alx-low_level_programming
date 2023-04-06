#include"main.h"
#include<string.h>
/**
 * binary_to_uint - converts binary to unsigned interger
 * @b: String of binary digits to be converted
 *
 * Return: integers
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalnum = 0, p = 1;
	int size = 0, i;

	if (!b)
		return (0);
	size = strlen(b);
	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimalnum = decimalnum + p;
		p *= 2;
	}
	return (decimalnum);
}
