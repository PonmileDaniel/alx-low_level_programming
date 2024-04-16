#include "hash_tables.h"

/**
 * hash_table_print - key and value to be printed
 * @ht: pointer
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", s, tmp->key, (char *)tmp->value);
			s = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

