#include "hash_tables.h"

/**
 * add_hash - adds an element to the hash table
 * @head: head of the hash list
 * @key: key to the hash
 * @value: value to be store
 * Return: head of the hash
 */
hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node;

	node = *head;

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (*head);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *head;
	*head = node;

	return (*head);
}

/**
 * hash_table_set - adds a hash table
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if success, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_hash(&(ht->array[index]), key, value) == NULL)
		return (0);
	return (1);
}
