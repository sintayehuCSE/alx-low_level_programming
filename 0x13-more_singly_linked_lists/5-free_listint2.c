#include "lists.h"
/**
 * free_listint2 - Frees a memory space allocated by malloc
 * @head: Pointer to the 1st node of the singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp)
	{
		*head = *head->next;
		free(temp);
		temp = *head->next;
	}
	head = NULL;
}
