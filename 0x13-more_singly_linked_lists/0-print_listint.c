#include "lists.h"
/**
 * print_listint - Print each element of a singly linked list
 * @h: Pointer to the singly linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
