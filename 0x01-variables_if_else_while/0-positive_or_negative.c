#include <stdlib.h>
#include<time.h>

/* The main function
 * it is the entery point 
 * Checks whether a number is zero, postive or negative
 * REturn 0 means successfully excecuted */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%d is postive number.\n", n);
	else if (n<0)
		printf("%d is negative number.\n", n);
	else
		printf("The value entered is zero.\n");
	return (0);
}
