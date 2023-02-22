#include"main.h"

/**
 * _islower - Entry point
 * Description: checks if the character is lowercase
 * @c: the integer value
 * Return: 1 if success, else
 */
int _islower(int c)
{
	int i = 'a';

	while (i < 'z')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
