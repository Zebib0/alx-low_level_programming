#include"main.h"
/**
 * print_alphabet() - function to print alphabets
 *
 * Description - The program displays all letters in lower case
 * Return : no return type
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

