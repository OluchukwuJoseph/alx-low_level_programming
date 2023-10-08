#include <stdlib.h>
#include <stdio.h>
 
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: Number of string to concatenate
 * Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i, lenght = 0, lenght2 = 0, c;

	/*checks if NULL was passed*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*counts strings*/
	for (i = 0; s1[i] != '\0'; i++)
		lenght++;
	for (c = 0; s2[c] != '\0'; c++)
		lenght2++;

	if (n > lenght2)
		n = lenght2;
	/*requests memory to store concatenated string*/
	array = malloc((lenght + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	/*concatenates string*/
	for (i = 0; i < lenght; i++)
		array[i] = s1[i];

	for (c = 0; c < n; c++)
		array[lenght + c] = s2[c];

	array[lenght + c] = '\0';
	return (array);
}
