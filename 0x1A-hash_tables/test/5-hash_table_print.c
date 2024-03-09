#include "hash_tables.h"
/**
* hash_table_print - Print the HashTable
* @ht: The HashTable
*
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0, prnted = 0;
	hash_node_t *head;

	if (ht)
	{
		count = count_item(ht);
		printf("{");
		for (; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head)
			{
				printf("'%s': '%s'", head->key, head->value);
				prnted++;
				if (prnted != count)
					printf(", ");
				head = head->next;
			}
		}
		printf("}\n");
	}
}
/**
* count_item - Count the number of item in HashTable
* @ht: The HashTable
*
* Return: The number of item in HashTable
*/
unsigned long int count_item(const hash_table_t *ht)
{
	unsigned long int count = 0, i = 0;
	hash_node_t *head;

	for (; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head)
		{
			while (head)
			{
				count++;
				head = head->next;
			}
		}
	}
	return (count);
}
