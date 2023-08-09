#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to a new string
 * @str: string input
 * Return: string copy
 */
char *_strdup(char *str)
{
	char *array;
	char *s = str;
	int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (*s != '\0')
	{
		i++;
		s++;
	}
	array = malloc(sizeof(str) * i);
	for (j = 0; j < i; j++)
		array[j] = str[j];
	return (array);
	free(array);
}
