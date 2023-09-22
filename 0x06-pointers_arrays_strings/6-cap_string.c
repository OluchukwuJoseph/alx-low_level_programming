#include "main.h"

/**
 * cap_string - Function changes the First letter of every word to uppercase
 * @n : string
 * Return: n
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0)
			n[0] = n[0] - 32;

		if (n[i] == ' ' ||
		n[i] == '\t' ||
		n[i] == '\n' ||
		n[i] == ',' ||
		n[i] == ';' ||
		n[i] == '.' ||
		n[i] == '?' ||
		n[i] == '"' ||
		n[i] == '(' ||
		n[i] == ')' ||
		n[i] == '{' ||
		n[i] == '}' ||
		n[i] == '!')
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				n[i + 1] = n[i + 1] - 32;
		}
	}
	return (n);
}
