#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value;

	hash_value = hash_djb2(key);
	index = hash_value % size;
	return (index);
}
