#include "lists.h"
/**
 * sum_listint - Find the sum of all elements of singly linked list
 * @head: Pointer to the singly linked list
 *
 * Return: The sum of the list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
