#include "main.h"

/**
 * _strchr - returns pointer to 'c'
 * @s: string to check
 * @c: char c
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((void *)0);
}
