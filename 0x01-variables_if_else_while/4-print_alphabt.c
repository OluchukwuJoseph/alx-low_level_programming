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
/*sets the variables bl and ll, and stores data in them*/
char bl, ll;
bl = 'a';
ll = 'z';

/*print the letters a -z except e and q*/
for (; bl <= ll; bl++)
{
	if (bl == 'e' || bl == 'q')
		continue;
	else
	putchar(bl);
}
putchar('\n');
return (0);
}
