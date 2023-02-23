#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
        int i;
        int first;
        int second;
        int seq;

        i = 3;
        first = 1;
        second = 2;
        printf("%d, %d, ", first, second);
        while (i <= 98)
        {
                seq = first + second;
                first = second;
                second = seq;
                if (i != 98)
                {
                        printf("%d, ", seq);
                }
                else
                        printf("%d", seq);
		putchar(',');
		putchar(' ');
                i++;
        }
        putchar('\n');
        return (0);
}
