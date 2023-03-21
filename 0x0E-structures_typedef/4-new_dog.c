#include"dog.h"
#include<string.h>
/**
 * new_dog - a function that assigns value
 * for the struct variables
 * @name : name of the dog
 * @age : dog's age
 * @owner: dog's owner name
 * Return: a value with return value dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size1, size2, i;
	dog_t *dog1;
	if (name == NULL || owner == NULL || age < 0) 
		return (NULL);
	dog1 = malloc(sizeof(struct dog));
	if (dog1 == NULL)
		return (NULL);
	size1 = strlen(name);
	size2 = strlen(owner);
	(*dog1).name = malloc(sizeof(char) * size1 + 1);
	if ((*dog1).name == NULL)
	{
		free((*dog1).name);
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		(*dog1).name[i] = name[i];
	(*dog1).age = age;
	(*dog1).owner = malloc(sizeof(char) * size2 + 1);
	if ((*dog1).owner == NULL)
	{
		free((*dog1).owner);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i < size2; i++)
		(*dog1).owner[i] = owner[i];
	return (dog1);
}
