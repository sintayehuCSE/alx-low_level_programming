#include "lists.h"
/**
 * add_dnodeint_end - Add a new node at the end of a doubly linked list
 * @head: Points to the pointer of the head of the doubly linked list
 * @n: The data of the new node
 *
 * Return: The address of the new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *end;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (temp);
	if (!*head)
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		end = *head;
		while (end->next)
			end = end->next;
		temp->n = n;
		temp->next = NULL;
		end->next = temp;
		temp->prev = end;
	}
	return (temp);
}
