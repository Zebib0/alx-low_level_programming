#include"main.h"

/**
 * _islower - Entry point
 * Description: checks if the character is lowercase
 * @c: the integer value
 * Return: 1 if success, else
 */
int _islower(int c)
{
	c = 'a';
	if (c < 'z')
		return (1);
	else
		return (0);
}
