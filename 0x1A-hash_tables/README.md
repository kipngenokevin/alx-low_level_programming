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

## Function that gives you the index of a key.

Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
* where `key` is the key
* and `size` is the size of the array of the hash table

```
#include "hash_table.h"

/**
 * key_index - Calculates the index at which a key should be stored in the hash table.
 * @key: The key to hash.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    // Calculate the hash value using the djb2 hash function.
    hash_value = hash_djb2(key);

    // Calculate the index using the hash value and the size of the hash table.
    return (hash_value % size);
}
```

## Function that adds an element to the hash table
Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
* Where `ht` is the hash table you want to add or update the key/value to
* `key` is the key. `key` can not be an empty string
* and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
* Returns: `1` if it succeeded, `0` otherwise
* In case of collision, add the new node at the beginning of the list
```
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
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			handle_collision(&ht->array[index], item);
			return (1);
		}
	}
	return (0);
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
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
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
```

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
* **hetairas** collides with **mentioner**
* **heliotropes** collides with **neurospora**
* **depravement** collides with **serafins**
* **stylist** collides with **subgenera**
* **joyful** collides with **synaphea**
* **redescribed** collides with **urites**
* **dram** collides with **vivency**
