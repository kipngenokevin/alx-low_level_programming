#include "main.h"
/**
 * _islower - checks if alphabet is lowercase
 * @c: takes the value of ASCII
 * Return: 1 if lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
