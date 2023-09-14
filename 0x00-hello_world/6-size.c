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
/*Print size of specifed data types in bytes*/
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);

}
