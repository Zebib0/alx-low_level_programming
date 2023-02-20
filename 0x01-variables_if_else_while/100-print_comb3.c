#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 * Description - The program prints digits lessthan 100 omits reverses
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
