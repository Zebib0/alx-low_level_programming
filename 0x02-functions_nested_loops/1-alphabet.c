#include"main.h"

/**
 * print_alphabet - Entry point
 *
 * Description - The program displays all letters in lower case
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

