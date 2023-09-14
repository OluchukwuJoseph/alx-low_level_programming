#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the standard Entry point of all C programs.
 * The program reads this function first before reading other functions.
 * Return: Ends the function
*/
int main(void)
{
/*sets n as a variable with int data type*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*Checks if n is a positive or negative number*/
if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
return (0);
}
