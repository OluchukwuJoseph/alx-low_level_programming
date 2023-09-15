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
/*stores value in lc, ll, ul and uc*/
char lc, ll, uc, ul;

lc = 'a';
ll = 'z';
uc = 'A';
ul = 'Z';
/*prints a-z and A-z*/
for (; lc <= ll; lc++)
{
	putchar(lc);
}

for (; uc <= ul; uc++)
{
	putchar(uc);
}
putchar('\n');

return (0);
}
