#include "main.h"

/**
 * _strcat - This function is used to concatenate strings
 * @dest: holds string to be concatenated and the concatenated string
 * @src: holds string to be concatenated
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, lenght;

	/* Get lenght to string to be concatenated*/
	lenght = 0;
	for (i = 0; dest[i] != '\0'; i++)
		lenght++;

	dest[lenght] = ' ';
	lenght++;

	/* concatenates dest with src*/
	for (i = 0; src[i] != '\0'; i++)
		dest[i + lenght] = src[i];

	dest[i + lenght] = '\0';
}
return (dest);
