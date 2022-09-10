#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point 
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	srand(time(0));
	/* your code goes there */
	if (n > 0)
	{
	       printf("%i is postive\n", n);
        }
	else if (n == 0);
	{
	       printf("%i is zero\n", n);
	}
	if (n < 0);
	{
	       printf("%i is negative\n", n);
	}
	return (0);
}
