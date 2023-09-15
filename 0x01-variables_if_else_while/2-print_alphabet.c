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
/*set fl and ll to values a and z*/
char fl;
char ll;

fl = 'a';
ll = 'z';
/*print a - y*/
for (fl; fl <= ll; fl++)
{
	putchar(fl);
}
putchar('\n');
return (0);
}
