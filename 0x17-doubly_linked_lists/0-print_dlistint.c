#include "lists.h"
/**
 * print_dlistint - Prints all elements of doubly linked list
 * @h: Points to the pointer of the first node of the dlistint_t list
 *
 * Return: The number of element in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t n = 0;

	if (!*head)
		return (n);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (n);
	while (temp)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}
