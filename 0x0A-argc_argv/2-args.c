#include "main.h"
#include <stdio.h>

/**
 * main - Prints all values passed
 * @argc: Argument counter
 * @argv: Argument Vector
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
