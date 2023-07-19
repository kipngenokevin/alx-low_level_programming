#include "main.h"

/**
 * _isalpha - checks if alphabet letter
 * @c: integer with ASCII value of char
 * Return: 1 if alphabaet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
