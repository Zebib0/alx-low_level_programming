#include"dog.h"
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
	struct dog *dog1;

	dog1 = malloc(sizeof(struct dog));
	if (dog1 == NULL)
		return (NULL);
	(*dog1).name = name;
	(*dog1).age = age;
	(*dog1).owner = owner;
	return (dog1);
}
