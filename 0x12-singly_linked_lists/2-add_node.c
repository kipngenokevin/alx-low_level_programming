#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "string.h"
/**
 * add_node - adds node to the beginning of list
 * @head: pointer to struct head
 * @str: string pointer
 * Return: pointer to struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i = 0;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		i++;
	}
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
