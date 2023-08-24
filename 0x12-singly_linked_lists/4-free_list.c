#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees list memory
 * @head: pointer to struct
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
