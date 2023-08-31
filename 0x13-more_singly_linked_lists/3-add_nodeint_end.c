#include "lists.h"
/**
 * add_nodeint_end -  Add a node to the end of singly linked list
 * @head: A pointer to the linked list
 * @n: The integer to store
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last_node;

	if (!head)
		return (NULL);
	temp = malloc(sizeof(*temp));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (!*head)
		*head = temp;
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = temp;
	}
	return (temp);
}
