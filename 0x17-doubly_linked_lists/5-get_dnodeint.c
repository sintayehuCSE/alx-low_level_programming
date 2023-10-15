#include "lists.h"
/**
 * get_dnodeint_at_index - Search for the nth node of the list
 * @head: Pointer to the head node of the list
 * @index: The nth node of a list
 *
 * Return: The address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *locate = NULL;
	unsigned int i;

	if (head)
	{
		locate = head;
		for (i = 0; i < index; i++)
		{
			if (locate)
				locate = locate->next;
			else
				break;
		}
	}
	return (locate);
}
