#include "lists.h"
/**
 * dlistint_len - Calculates the number of element in a doubly linked list
 * @h: Points to the first node of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	if (!h)
		return (n);
	temp = h;
	while (temp)
	{
		n++;
		temp = temp->next;
	}
	return (n)
}
