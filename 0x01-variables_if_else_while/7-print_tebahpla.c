#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the standard Entry point of all C programs.
 * The program reads this function first before reading other functions.
 * Return: return 0 if error is encounted.
*/
int main(void)
{
/*sets bc and lc as variables and stores data in them*/
char bc, lc;
bc = 'a';
lc = 'z';

/* Prints z - a)*/
for  (; lc >= bc; lc--)
	putchar(lc);

putchar('\n');

return (0);
}
