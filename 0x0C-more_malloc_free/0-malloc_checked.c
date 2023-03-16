#include<stdlib.h>
/**
 * malloc_checked - allocates a block of memory
 * @b: the size of block allocated
 * Return: address of block of memory if successful else the status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
