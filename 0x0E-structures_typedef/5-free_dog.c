#include"dog.h"
/**
 * free_dog - free the memory of free dog
 * @d: the address of the dog struct
 * Return: no return value
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
