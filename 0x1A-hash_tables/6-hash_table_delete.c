#include "hash_tables.h"
/**
 * hash_table_delete - deletes the hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *current_node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			current_node = node;
			node = node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
		}
	}
	free(ht->array);
	free(ht);

}
