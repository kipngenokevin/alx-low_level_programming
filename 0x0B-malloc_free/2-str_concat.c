#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		array[i] = s1[i];
	for (i = 0; i < len2; i++)
		array[len1 + i] = s2[i];
	array[len1 + len2] = '\0';
	return (array);
}
