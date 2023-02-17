#include <stdlib.h>
#include<time.h>
#include <stdio.h>
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
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
