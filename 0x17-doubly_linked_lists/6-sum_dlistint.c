#include "lists.h"
/**
 * sum_dlistint - Calculate sum of all data of a dlistint_t list
 * @head: Pointer to the head node of a doubly linked list
 *
 * Return: The sum of the data in each node of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	else
	{
		while(head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
