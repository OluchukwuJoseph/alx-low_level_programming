#include "main.h"

/**
 * _sqrt_recursion - prints the square root of a number
 * @n: number
 * Return: returns squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}

/**
 * squareroot - prints the squareroot of a number
 * @n: number
 * @i: iteration / squareroot
 * Return: squareroot to _sqrt_recursion
 */
int squareroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
