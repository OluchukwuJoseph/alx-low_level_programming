#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of numbers and operator passed
 * @ac: argument counter
 * @av: argument vector
 * Return: nothing
 */
int main(int ac, char *av[])
{
	int s1, s2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s1 = atoi(av[1]);
	op = av[2];
	s2 = atoi(av[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && s2 == 0) || (*op == '%' && s2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(s1, s2));
	return (0);
}
