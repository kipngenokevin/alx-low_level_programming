#include "main.h"

/**
 * _strncat - function to return strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *c = dest;
	int i;

	i = 0;

	while (*c != '\0')
	{
		c++;
	}
	while (*src != '\0')
	{
		if (i < n)
		{
			*c = *src;
			c++;
			src++;
			i++;
		}
		else
			break;
	}
	*c = '\0';
	return (dest);
}
