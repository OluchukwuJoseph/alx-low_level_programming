#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number
 * Return: returns 1 i number is a prime number and 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}

/**
 * prime_number - checks if number is a prime number
 * @n: number
 * @i: iteration
 * Return: 1 or 0
 */
int prime_number(int n, int i)
{
	if (i <= n / 2 && n % i == 0)
		return (0);
	if (i >= n && n % i)
		return (1);
	return (prime_number(n, i + 1));
}
