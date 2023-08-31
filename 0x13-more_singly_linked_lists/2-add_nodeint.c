#include "main.h"
/**
 * add_nodeint - Add a new node to a linked list
 * @head: Pointer to the singly linked list
 * @n: The integer data
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(*temp));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
