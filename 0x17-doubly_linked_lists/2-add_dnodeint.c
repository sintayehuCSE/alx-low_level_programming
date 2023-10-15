#include "lists.h"
/**
 * add_dnodeint - Add a new node to the beginning of a doubly linked list
 * @head: Points to the pointer of the first node of the list
 * @n: The data of the new node
 *
 * Return: The address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (new_node);
	if (!*head)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
