#include "main.h"
#include <stdio.h>

/**
 * main - prints source code file name
 * Return: 0
 */
int main(void)
{
	int i;
	char *array;

	array = __FILE__;
	for (i = 0; array[i] != '\0'; i++)
		_putchar(array[i]);
	_putchar('\n');
	return (0);
}
