#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n<0)
	   printf(n," is negative");
	else if(n>0)
	   printf(n," is positive");
	else
	   printf(n," is zero");
	return (0);
}
