# include <stdio.h>
/**
 * main - Entry point
 * Description: displays the prime factors of a number
 * Return: 0 if success
 */
int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%ld", i);
	putchar('\n');
	return (0);

}
