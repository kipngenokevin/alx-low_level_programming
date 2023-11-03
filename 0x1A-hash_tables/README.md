# Hash Tables in C
This project will cover the following concepts:
* function that creates a hash table
* hash function implementing the djb2 algorithm
* function that gives you the index of a key.
* function that adds an element to the hash table
* function that retrieves a value associated with a key
* function that prints a hash table
* function that deletes a hash table

## Header File
The following structs will be used in our project.
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Function that creates a hash table.
Prototype `hash_table_t *hash_table_create(unsigned long int size);`
`size` is the size of array.
```
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size is the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
```

## Hash function implementing the djb2 algorithm
Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

```
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
```
