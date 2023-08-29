#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "list.h"
/**
 * print_list - A function that prints all element of a list
 * @h: Pointer to the first element of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			if (h->str == NULL)
			{
				write(1, "[0] (nil)", 9);
				h = h->next;
			}
			else
			{
				printf("[%u] %s\n", h->len, h->str);
				h = h->next;
			}
			node_num++;
		}
	}
	return (node_num);
}
