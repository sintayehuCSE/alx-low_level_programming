#include "lists.h"
/**
 * reverse_listint - Reverse the node of a singly linked list
 * @head: Pointer to the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse;
	listint_t *move;

	move = reverse = NULL;
	if (!head)
		return (NULL);
	if (!*head)
	{
		return (reverse);
	}
	while (*head)
	{
		move = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = move;
	}
	*head = reverse;
	return (reverse);
}
