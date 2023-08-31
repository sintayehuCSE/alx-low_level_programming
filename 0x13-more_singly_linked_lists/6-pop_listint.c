#include "lists.h"
/**
 * pop_listint - Deletes the first or head node of a singly linked list
 * @head: Pointer to the singly linked list
 *
 * Return: The integer value at the deleted head node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (!head || !*head)
		return (n);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
