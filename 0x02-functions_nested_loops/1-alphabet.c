#include <stdio.h>
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet() - function to print alphabets
 * Description - The program displays all letters in lower case
 * print_alphabet - function to be printed
 *
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
