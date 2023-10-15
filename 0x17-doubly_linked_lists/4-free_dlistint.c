#include "lists.h"
/**
 * free_dlistint - Deallocates a space dynamically assigned to a node of Dlist
 * @head: Pointer to the head node of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *move;

	if (head)
	{
		temp = head;
		move = head;
		while (move)
		{
			move = move->next;
			free(temp);
			temp = move;
		}
	}
}
