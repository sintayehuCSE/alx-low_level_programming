#include "lists.h"
/**
 * get_nodeint_at_index - Finds the specified node of a singly linked list
 * @head: Pointer to the singly linked list
 * @index: The location of the desired node
 *
 * Return: Pointer to the located node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; i < index && head; i++)
	{
		head = head->next;
	}
	return (head);
}
