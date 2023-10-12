#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a particular index
 * @head: pointer to the head element
 * @index: index of the pointer
 * Return: 1 sucess -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (temp != NULL && i < index)
	{
		i++;
		if (i == index)
		{
			current = temp;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(current);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
