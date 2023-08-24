#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of items
 * in a linked list
 * @h: pointer to struct
 * Return: number of lists
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
