#include "lists.h"
/**
 * listint_len - Determine number of nodes in singly linked list
 * @h: Pointer to the singly linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
