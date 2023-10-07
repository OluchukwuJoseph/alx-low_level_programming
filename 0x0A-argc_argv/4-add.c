#include <stdio.h>
#include "main.h"

/**
 * main - adds numbers
 * @ac: Argument counter
 * @Argument Array
 * Return: sum of numbers
*/
int main(int ac, char *av[])
{
	int i, j, n, number = 0, result = 0;
	/*Checks if any argument was passed*/
	if (ac == 1)
		return (0);
	/*Checks for numbers in the array and converts them to integer*/
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
			{
				n = (av[i][j] - '0');
				number = number * 10 + n;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		/*sum intergers*/
		result = result + number;
		number = 0;
	}
	/*print integers*/
	printf("%d\n", result);
	return (0);
}
