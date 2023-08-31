#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: Pointer to the singly linked list
 * @index: The location of the node
 *
 * Return: 1 on success. -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *search_node;
	listint_t *link_node;

	if (!head || !*head)
		return (-1);
	search_node = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(search_node);
		return (1);
	}
	for (; i < index; i++)
	{
		link_node = search_node;
		search_node = search_node->next;
		if (!search_node)
			return (-1);
	}
	link_node->next = search_node->next;
	free(search_node);
	return (1);
}
