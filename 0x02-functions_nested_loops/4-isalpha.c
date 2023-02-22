#include"main.h"

/**
 * _islower - Entry point
 * Description: checks if the character is lowercase
 * @c: the integer value
 * Return: 1 if success, else
 */
int _isalpha(int c)
{
        int i = 'a';
	int j = 'A';

        while (i < 'z' && j < 'Z')
        {
                if (c == i || c == j)
                        return (1);
                i++;
        }
        return (0);
}
