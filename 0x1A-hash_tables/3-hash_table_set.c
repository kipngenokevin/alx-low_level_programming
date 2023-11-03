#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value:  value associated with the key.
 * value must be duplicated
 * value can be an empty string
 * Return: 1 success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *current_item;

	if (key[0] == '\0' || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = create_hash_node((char *)key, (char *)value);
	current_item = ht->array[index];

	if (current_item == NULL)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		while (current_item)
		{
			if (strcmp(current_item->key, key) == 0)
			{
				free(current_item->value);
				current_item->value = strdup(value);
				if (current_item->value == NULL)
				{
					free(item->key);
					free(item->value);
					free(item);
					return (0);
				}
				free(item->key);
				free(item->value);
				free(item);
				return (1);
			}
			current_item = current_item->next;
		}
		handle_collision(&ht->array[index], item);
	}
	return (1);
}
/**
 * create_hash_node - create a new instnce of hash_node
 * @key: key
 * @value: value passed to the key
 * Return: a new_node otherwise NULL
 */
hash_node_t *create_hash_node(char *key, char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
/**
 * handle_collision - adds a new element to a the head of
 * the linked list
 * @current: the current item in the index
 * @it: pointer to the item to be added to the list
 * Return: void
 */
void handle_collision(hash_node_t **current, hash_node_t *it)
{
	it->next = *current;
	*current = it;
}
