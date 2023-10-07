#include <stdio.h>
#include "main.h"

/**
 * main - adds numbers
 * @ac: Argument counter
 * @av: Argument Array
 * Return: sum of numbers
*/
int main(int ac, char *av[])
{
	int i, n, result = 0;
	/*Checks if any argument was passed*/
	if (ac == 1)
		return (0);
	/*Checks for numbers in the array and converts them to integer*/
	for (i = 1; i < ac; i++)
	{
		int j = 0, is_negative = 0, number = 0;

		if (av[i][j] == '-')
		{
			is_negative = 1;
			j++;
		}
		for (; av[i][j] != '\0'; j++)
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
		if (is_negative == 1)
			number = -number;
		/*sum intergers*/
		result = result + number;
		number = 0;
	}
	/*print integers*/
	printf("%d\n", result);
	return (0);
}
