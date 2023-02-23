#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;
	int sum;

	n = 3;
	while (n <= 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
