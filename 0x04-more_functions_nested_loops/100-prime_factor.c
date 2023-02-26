# include <stdio.h>
# include <math.h>
/**
 * main - Entry point
 * Description: displays the prime factors of a number
 * Return: 0 if success
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}
	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%ld ", i);
			n = n / i;
		}
	}
	if (n > 2)
		printf("%ld ", n);
	putchar('\n');
	return (0);
}
