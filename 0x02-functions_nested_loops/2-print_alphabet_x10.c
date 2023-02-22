#include "main.h"
/**
 * print_alphabet - function to print alphabets
 * 
 * Description - The program displays all letters in lower case
 * Return : no return type 
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

<<<<<<< HEAD
	while (i < 10)
=======
	while (i <= 10)
>>>>>>> 2df6baaa0f89a89a65abc5ab9381c61754426811
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
