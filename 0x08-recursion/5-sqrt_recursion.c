#include"main.h"
/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
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
	return (check(1, n));
}

