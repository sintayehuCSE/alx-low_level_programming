#include "hash_tables.h"
/**
* hash_table_delete - Free's all memory allocated to HashTable
* @ht: The HashTable
*
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *temp;
	unsigned long int i = 0;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			head = ht->array[i];
			temp = head;
			while (head)
			{
				head = head->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = head;
			}
		}
		free(ht->array);
		free(ht);
	}
}
