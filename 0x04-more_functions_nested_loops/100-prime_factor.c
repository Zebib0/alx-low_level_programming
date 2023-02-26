# include <stdio.h>
# include <math.h>
void primeFactors(long int n);
/**
 * main - Entry point
 * Description: displays the prime factors of a number
 * @n: the integer value
 * Return: 0 if success
 */

int main(void)
{
	long int n = 612852475143;

	primeFactors(n);
	return (0);
}
/**
 * primeFactors - function for prime factors
 * Description: checks the existance of prime factor
 * and displays it.
 * @n: the integer value
 * @i: the value of prime factors
 * Return: no return value
 */

void primeFactors(long int n)
{
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
}
