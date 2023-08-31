#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at the requested index
 * @head: Pointer to the singly linked list
 * @idx: The index of new node
 * @n: The integer value of the node
 *
 * Return: Pointer to the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *search_node;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(*temp));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	search_node = *head;
	if (!idx)
	{
		*head = temp;
		temp->next = search_node;
		return (temp);
	}
	for (; i < idx - 1; i++)
	{
		search_node = search_node->next;
		if (!search_node)
			return (NULL);
	}
	temp->next = search_node->next;
	search_node->next = temp;
	return (temp);
}
