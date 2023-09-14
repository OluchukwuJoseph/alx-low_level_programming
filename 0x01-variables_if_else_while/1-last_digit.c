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
/*sets n and ln as a variable with int data type*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int ln = n % 10;
/* Checks if ln is a greater than 5 or less than 5.*/
if (ln > 5 && ln != 0)
	printf("Last digit of %d is %d and is greater than 5\n", n, ln);
else if (ln < 6 && ln != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
else if (ln < 6 && ln == 0)
	printf("Last digit of %d is %d and is 0\n", n, ln);

return (0);
}
