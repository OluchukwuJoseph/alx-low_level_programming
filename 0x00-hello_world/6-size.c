#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the standard Entry point of all C program.
 * It is the function that gets read first.
 * Return: The output of arguments in this function
 */
int main(void)
{
/*Declears c, i, li, f as variables of specified data types*/
char c;
int i;
long long int li;
float f;
/*Print size of bytes for specified data types*/
printf("Size of a char: %d byte(s)\n", sizeof(c));
printf("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long long int: %d byte(s)\n", sizeof(li));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);

}
