#include "main.h"

/**
 * main - Entry point
 *
 * Return: return 0 on sucess
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
