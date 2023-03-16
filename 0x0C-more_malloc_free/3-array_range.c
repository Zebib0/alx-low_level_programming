#include"main.h"
#include<stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a;
	int num, i;

	num = max - min;
	if (min > max)
		return (NULL);
	a = (int *) malloc(sizeof(int) * (num + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}
