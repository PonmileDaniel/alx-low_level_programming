#include "hash_tables.h"

/**
 * hash_table_delete - delete the hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp1;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while ((tmp1 = tmp) != NULL)
		{
			tmp = tmp->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
		}
	}
	free(ht->array);
	free(ht);
}
