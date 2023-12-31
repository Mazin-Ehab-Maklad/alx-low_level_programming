#include "main.h"

/**
 * _strcat - appends two strings
 *
 * @dest: the first string
 * @src: the second string
 *
 * Return: pointer to the final string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
