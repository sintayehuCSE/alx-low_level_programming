#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a new node at an index
 * @h: Points to the pointer of the first node of a list
 * @idx: The index at which to insert a new node
 * @n: The data of the new node
 *
 * Return: The address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *locate;
	dlistint_t *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (new_node);
	if (!*h && idx == 0)
	{
		new_node->n = n;
		new_node->next = *h, new_node->prev = *h;
		*h = new_node;
		return (new_node);
	}
	locate = *h;
	for (; i < idx - 1; i++)
	{
		if (locate)
			locate = locate->next;
		if (!locate)
			return (locate);
	}
	if (idx == 0)
	{
		new_node->n = n, new_node->next = locate;
		new_node->prev = NULL, locate->prev = new_node;
	}
	if (locate->next)
	{
		new_node->n = n, new_node->next = locate->next;
		new_node->prev = locate, temp = locate->next;
		locate->next = new_node, temp->prev = new_node;
	}
	else
	{
		new_node->n = n, new_node->next = locate->next;
		new_node->prev = locate, locate->next = new_node;
	}
	return (new_node);
}
