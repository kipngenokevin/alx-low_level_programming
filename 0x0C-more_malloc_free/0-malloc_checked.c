#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - assigns space in memory
 * @b: size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
