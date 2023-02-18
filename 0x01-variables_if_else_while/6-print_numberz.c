#include<stdio.h>


/**
 * main - Entry point
 * Description - print all single digit number greater than 0
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
