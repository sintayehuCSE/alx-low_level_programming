#include "lists.h"
/**
 * free_listint - Dealocate the memory area used for storing list node
 * @head: Pointer to the singly linked list 1st node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
