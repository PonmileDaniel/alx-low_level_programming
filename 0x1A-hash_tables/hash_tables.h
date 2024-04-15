#ifndef __HASH__
#define __HASH__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: This key are unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
*/

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash Table data structure
 * @size: The size of the array
 * @array: An array of size
 * Cell of the array is a pointer to the first node of a
 * because, we want hashtable to use a chaining collision handling
*/
typedef struct hash_table_s
{
    hash_node_t **array;
    unsigned long int size;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif