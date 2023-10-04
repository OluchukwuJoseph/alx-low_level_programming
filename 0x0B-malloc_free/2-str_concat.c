#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: Concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, lenght1 = 0, lenght2 = 0;

	/*checks if first string and second string is NULL*/
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		/*counts first string*/
		for (i = 0; s1[i] != '\0'; i++)
			lenght1++;
	}

	if (s2 != NULL)
	{
		/*counts second string*/
		for (i = 0; s2[i] != '\0'; i++)
			lenght2++;
	}

	array = malloc((lenght1 + lenght2) * sizeof(char));
	if (array == NULL)
		return (NULL);
	/*stores first string in array*/
	for (i = 0; i < lenght1; i++)
		array[i] = s1[i];
	/*stores second string in array*/
	for (i = 0; i < lenght2; i++)
		array[lenght1 + i] = s2[i];

	array[lenght1 + lenght2] = '\0';
	return (array);
}
