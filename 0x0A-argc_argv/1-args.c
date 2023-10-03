#include "main.h"
#include <stdio.h>

/**
 * main - prints number of values passed
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 on sucess
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
