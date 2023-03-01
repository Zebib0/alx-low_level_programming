#include"main.h"

/**
 * reverse_array - reverses the position of interger
 * of the array.
 * @a: array of integers
 * @n: the number of array members
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = temp;
	}
}
