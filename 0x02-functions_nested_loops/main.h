#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabets in lowercase.
 *
 * Return: returns 0 on sucess
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print the alphabets in lowercase 10 times.
 * Return: returns 0 on sucess.
 */
void print_alphabet_x10(void);

#endif
