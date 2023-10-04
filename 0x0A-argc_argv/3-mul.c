#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply first 2 strings
 * @argc: Argument counter
 * @argv: Argument Vector
 * Return: 0 on Sucess and 1 on Error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}
	if (argc > 2)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
