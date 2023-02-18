#include<stdio.h>

/**
 * main - Entry point
 * Description - prints the size of datatypeis
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int f;
	int ll;
	int l;
	int ch;

	i = sizeof(int);
	f = sizeof(float);
	ll = sizeof(long long int);
	l = sizeof(long int);
	ch = sizeof(char);
	printf("Size of a int: %d", i);
	printf("Size of a float: %d", i);
	printf("Size of a long long int: %d", i);
	printf("Size of a long int: %d", i);
	printf("Size of a char: %d", i);
	return (0);
}
