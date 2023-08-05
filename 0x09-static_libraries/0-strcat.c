#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*c != '\0')
	{
		c++;
	}
	while (*src != '\0')
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (dest);
}
