#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimal number to make change for an amount of money
 * @ac: Argument counter
 * @av: Argument Array
 * Return: 0 on sucess
*/
int main(int ac, char *av[])
{
	int num, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(av[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
