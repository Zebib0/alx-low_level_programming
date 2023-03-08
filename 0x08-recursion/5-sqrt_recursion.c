#include"main.h"
int _sqrt_recursion(int n);
/**
 * sqrt_test - contains the condition to obtain
 * natural square root of an integer.
 * @temp: base
 * @i: square root
 * Return: square root of a number
 */
int sqrt_test(int temp, int i)
{
	if (i * i == temp)
		return (i);
	if (i * i > temp)
		return (-1);
	return (sqrt_test(temp, i + 1));
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
		return (sqrt_test(n, 1));
}

