#include <stdio.h>
#include "main.h"

/**
 * swap_int - This function swaps the value of two integers
 * @a: a pointer dereference
 * @b: a pointer deference
 * Return : no return value
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
