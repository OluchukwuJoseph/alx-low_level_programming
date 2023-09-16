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

/* sets c,lc,n and ln as variables and stores values in then*/
char c, lc;
int n, ln;


c = 'a';
lc = 'f';
n = 0;
ln = 9;

/*print 0-9 and a-f*/
for (; n <= ln; n++)
	putchar('0' + n);

for (; c <= lc; c++)
	putchar(c);

putchar('\n');
return (0);
}
