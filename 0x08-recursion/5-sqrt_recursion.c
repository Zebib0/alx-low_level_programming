#include"main.h"
/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion - function to obtain
 * square root of a number using recursion
 * @n: integer value
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{

	if (n < 2)
		return (n);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 1));
}

