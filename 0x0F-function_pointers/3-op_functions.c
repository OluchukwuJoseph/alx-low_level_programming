#include "3-calc.h"
#include <stddef.h>
/**
 * op_add - sums intergers
 * @a: first interger
 * @b: second integer
 * Return: sum of integers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract intergers
 * @a: first interger
 * @b: second integer
 * Return: difference of integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies intergers
 * @a: first interger
 * @b: second integer
 * Return: Product of integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides intergers
 * @a: first interger
 * @b: second integer
 * Return: division of integers
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides intergers
 * @a: first interger
 * @b: second integer
 * Return: remainder of division between integers
*/
int op_mod(int a, int b)
{
	return (a % b);
}
