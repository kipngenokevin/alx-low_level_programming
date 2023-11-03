#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int r, p, q;

    ht = hash_table_create(1024);
    r = hash_table_set(ht, "betty", "cool");
    p = hash_table_set(ht, "first", "hetairas");
    q = hash_table_set(ht, "second", "mentioner");
    if (p & q & r)
	    printf("Success\n");
    else
	    printf("Failed\n");
    return (EXIT_SUCCESS);
}
