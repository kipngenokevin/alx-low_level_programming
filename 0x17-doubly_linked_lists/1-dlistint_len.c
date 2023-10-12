#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - returns the number of items in a list
 * @h: pointer to the head element
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
