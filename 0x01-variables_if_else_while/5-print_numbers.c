#include<stdio.h>


/**
 * main - Entry point
 * Description - print all single digit number greater than 0
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	while (i < 10 && i >= 0)
	{
		putchar(i);
		i++;
	}

	return (0);
}
