#include"function_pointers.h"
/**
 * int_index - Function that searches for a given integer
 * @array: integer array
 * @size: Size of the array
 * @cmp: Pointer to a function
 * Return: The index of the array or -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
