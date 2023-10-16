#include "main.h"

/**
 * _strncpy - copies the values of string
 * @dest: first string
 * @src: second string
 * @n: - integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
