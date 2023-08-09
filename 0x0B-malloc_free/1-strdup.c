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
	int i, j;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	array = malloc(sizeof(char) * (i + 1));
	if (array == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		array[j] = str[j];
	array[i] = '\0';
	return (array);
	free(array);
}
