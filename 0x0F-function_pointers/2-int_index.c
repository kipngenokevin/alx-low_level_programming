#include <stdlib.h>
/**
 * int_index - checks if array element matches
 * @array: pointer to array of int
 * @size: array size
 * @cmp: pointer to function
 * Return: integer position
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
