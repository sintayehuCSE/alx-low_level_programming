#include "lists.h"
size_t print_non_loop(listint_t *head);
/**
 * print_listint_safe - Print list in safe mode
 * @head: Pointer to the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(listint_t *head)
{
	size_t num_node = 0;
	listint_t *slow_ptr;
	listint_t *fast_ptr;
	listint_t *jam_loop;

	if (!head->next)
	{
		num_node = print_non_loop(head);
		return (num_node);
	}
	slow_ptr = fast_ptr = head;
	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
				if (slow_ptr == fast_ptr)
				{
					jam_loop = head;
					while (jam_loop != fast_ptr)
					{
						printf("[%p] %d\n", (void *)jam_loop, jam_loop->n);
						num_node++;
						jam_loop = jam_loop->next;
					}
					printf("[%p] %d\n", (void *)jam_loop, jam_loop->n);
					jam_loop = jam_loop->next;
					while (jam_loop != slow_ptr)
					{
						printf("[%p] %d\n", (void *)jam_loop, jam_loop->n);
						num_node++;
						jam_loop = jam_loop->next;
					}
					printf("-> [%p] %d\n", (void *)jam_loop, jam_loop->n);
				}
			}
		}
		if (slow_ptr == fast_ptr)
			break;
		if (!fast_ptr)
			num_node = print_non_loop(head);
	}
	if (slow_ptr == fast_ptr && fast_ptr == head)
		exit (98);
	return (num_node);
}
/**
 * print_non_loop - Prints singly linked list with no loop
 * @head: Pointer to the non-looped singly linked list
 *
 * Return: Number of node in the list
 */
size_t print_non_loop(listint_t *head)
{
	size_t num_node = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num_node++;
		head = head->next;
	}
	return (num_node);
}
