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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
