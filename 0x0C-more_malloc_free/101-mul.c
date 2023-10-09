#include <stdlib.h>
#include <stdio.h>
#include "main.h"

#define ERR_MSG "Error"

/**
 * _isdigit - checks for non digit in string
 * @s: string
 * Return: 0 if non digit is found and 1 if not
*/
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		return (0);
	}
	return (1);
}

/**
 * _strlen - counts string
 * @s: string
 * Return: lenght of string
*/
int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght++;
	return (lenght);
}

/**
 * error - prints Error
 * Return: 98
*/
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 positive number
 * @ac: argument counter
 * @av: argument srray
 * Return: product of numbers passed
*/
int main(int ac, char *av[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = av[1], s2 = av[2];
	if (ac != 3 || !_isdigit(s1) || !_isdigit(s2))
		error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(len * sizeof(int));
	if (result == NULL)
		return (1);
	for (i = 0; i <= (len1 + len2); i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
			if (carry > 0)
				result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
	_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
