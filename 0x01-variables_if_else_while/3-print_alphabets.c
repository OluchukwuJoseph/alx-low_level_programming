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
/*stores value in lc and uc*/
char lc;
char uc;

lc = 'a';
uc = 'z';
/*prints a-z and A-z*/
for (; lc <= 'z'; lc++)
{
	putchar(lc);
}

for (char uc = 'A'; uc <= 'Z'; uc++)
{
	putchar(uc);
}
putchar('\n');

return (0);
}
