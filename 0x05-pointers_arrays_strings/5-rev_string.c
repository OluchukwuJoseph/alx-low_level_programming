#include "main.h"

/**
 * rev_string - reverse string by swapping indexes
 * @s: array that stores string
 * Return: Void
 */
void rev_string(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}

	/*If lenght is an even number*/
	if (lenght - 1 % 2 == 0)
	{
		char tmp;

		for (i = 0, lenght = lenght - 1; i <= lenght; i++, lenght--)
		{
			/* store s[i] in tmp tempoarily*/
			tmp = s[i];
			/* swaps s[i] to s[lenght]*/
			s[i] = s[lenght];
			/* swaps s[lenght] to s[i]*/
			s[lenght] = tmp;
		}
	}
	/* If lenght is an odd number*/
	else
	{
		for (i = 0, lenght = lenght - 1; i < lenght; i++, lenght--)
		{
			/* store s[i] in tmp tempoarily*/
			tmp = s[i];
			/* swaps s[i] to s[lenght]*/
			s[i] = s[lenght];
			/* swaps s[lenght] to s[i]*/
			s[lenght] = tmp;
		}
	}
}
