#include "main.h"

/**
 * _strlen - prints the length of a string
 * @c: string value
 * Return: length int
 */

int _strlen(char *c)
{
	int length = 0;

	while (*c != '\0')
	{
		length++;
		c++;
	}

	return (length);
}
