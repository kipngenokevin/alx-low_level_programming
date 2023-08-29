#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts node at index n
 * @head: pointer to node
 * @idx: index to insert node
 * @n: value to insert
 * Return: node pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current;
	listint_t *temp;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode != NULL)
	{
		if (*head != NULL)
			current = *head;
		newnode->n = n;
		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
		}
		while (current != NULL && i < idx)
		{
			temp = current;
			current = current->next;
			i++;
		}
		if (i == idx)
		{
			temp->next = newnode;
			newnode->next = current;
		}
		else
			return (NULL);
	}
	return (newnode);
}
