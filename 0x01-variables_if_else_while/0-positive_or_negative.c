#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*  main -> this is a function to print
*  Return: success always 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		{
		printf("%d is negative", n);
		}
	else if (n == 0)
		{
		printf("%d is zero", n);

		}
	else
		{
		printf("%d is positive", n);
		}
		printf("\n");
	return (0);
}
