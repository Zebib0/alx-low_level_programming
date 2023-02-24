#include"main.h"

/**
 * _isdigit - Entry point
 * Description: checks if the value entered is digit
 * @c: the integer value
 * Return: 1 if success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
