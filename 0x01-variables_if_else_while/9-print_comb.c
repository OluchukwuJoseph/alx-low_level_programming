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
/*sets n and ln as variables and stores values in them*/

int n, ln;
n = 0;
ln = 9;

/*print 0 - 9 in ascending order with comma seperating them*/

for (; n <= ln; n++)
{
	putchar('0' + n);
	if (n < 9)
	{
		putchar(',');
		putchar(' ');
	}
}

putchar('\n');
return (0);
}
