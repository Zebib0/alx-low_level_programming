#include<stdio.h>


/**
 * main - Entry point
 * Description - print all single digit number greater than 0
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10 && i >= 0)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
