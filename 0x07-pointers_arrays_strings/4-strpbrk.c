#include "main.h"

/**
 * _strpbrk - return matching string
 * @s: main string
 * @accept: string to check against
 * Return: s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *accept_ptr = accept;

		while (*accept_ptr != '\0')
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return (NULL);
}
