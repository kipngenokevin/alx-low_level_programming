#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * You should print the key/value in the order that they appear
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int printed = 0;

	printf("{");
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (printed)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				printed = 1;
			}
		}
	}
	printf("}");
	printf("\n");
}
