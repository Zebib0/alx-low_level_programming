#include <stdio.h>
void print_alphabet(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Entry point
 * Description =to print alphabet letters
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
