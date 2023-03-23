#include"function_pointers.h"
/**
 * array_iterator - a function iterates through
 * array and execute a callback func each time
 * @array: arrays
 * @size: the size of the array
 * @action: a callback function we need to execute each time
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size; i++)
	(*action)(array[i]);
}
