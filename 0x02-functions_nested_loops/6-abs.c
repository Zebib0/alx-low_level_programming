#include"main.h"

/**
 * _abs - Entry point
 * Description: Absolute value of a number
 * @i: the integer value
 * Return: 1 if success, else
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
