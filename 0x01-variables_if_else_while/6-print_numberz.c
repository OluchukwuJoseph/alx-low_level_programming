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
int num;
num = 0;
/*prints 0 - 9*/
for (; num <= 9; num++)
{
/*Converts num to a character and prints it*/
	putchar('0' + num);
}
putchar('\n');
return (0);
}
