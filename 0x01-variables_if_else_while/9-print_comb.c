#include <stdio.h>

/**
 * main - Entry point
 * Description - print all single digit number with comma
 * Return: always 0 (success), ascending order
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + '0');
		if	(i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
