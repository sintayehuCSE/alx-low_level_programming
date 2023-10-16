#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node at position in a doubly linked list
 * @head: Points to the pointer of the head node of the list
 * @index: The index of the node to be removed
 *
 * Return: 1 on success. -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *locate = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	for (; (i <= (idx - 1)) && idx; i++)
	{
		if (locate)
			locate = locate->next;
		if (!locate)
			return (-1);
	}
	if (idx == 0)
	{
		temp = locate->next, temp->prev = NULL;
		*head = temp, free(locate);
		return (1);
	}
	temp = locate->prev;
	temp->next = locate->next;
	if (locate->next)
		locate->next->prev = temp;
	free(locate);
	return (1);
}
