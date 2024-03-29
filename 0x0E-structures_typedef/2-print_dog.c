#include"dog.h"
/**
 * print_dog - display dog's attribute
 * @d: a struct instance of dog
 * Return: no return value
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		puts("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		puts("Owner: (nil)");
}
