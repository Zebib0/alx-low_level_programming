#include"main.h"

/**
 * _isupper - Entry point
 * Description: checks if the character is uppercase
 * @c: the integer value
 * Return: 1 if success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
