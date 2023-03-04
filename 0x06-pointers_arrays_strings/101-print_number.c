#include"main.h"

void print_number(int n)
{
	unsigned int i = 0;
	if(i < 10)
	{
		if (n < 0)
        {
                _putchar('-');
                n = -i;
        }
		else
        {
            n = i;
        }
}

	if (i >= 10)
	{
		putchar((i/10)+'0');
		putchar((i%10)+'0');
		printf("\n");
		 if (n < 0)
        {
                _putchar('-');
                n = -i;
        }
        else
        {
            n = i;
	}
	}
}
