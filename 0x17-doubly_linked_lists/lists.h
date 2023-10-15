#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dlistint_s - Doubly linked list
 * @n: Integer
 * @prev: Points to the previous node
 * @next: Points to the next node
 *
 * Description: Doubly linked list node structure
 */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
