#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 * @dest: location 1
 * @src: string 2
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
