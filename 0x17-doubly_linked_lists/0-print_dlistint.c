#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - print the linked list
 * @h: head of the element
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
