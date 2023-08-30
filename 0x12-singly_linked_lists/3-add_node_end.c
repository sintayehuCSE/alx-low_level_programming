#include "lists.h"
char *_strdup(const char *);
unsigned int _strlen(const char *);

size_t print_list(const list_t *h)
{
	while (h)
	{
		if (h->next == NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			write(1, "[0] (nil)\n", 10);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (0);
}
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
/**
 * add_node_end - Add a new node to the end of a singly linked list
 * @head: Pointer to the list
 * @str: Pointer to string value of the list
 *
 * Return: Pointer to the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;

	temp = malloc(sizeof(*temp));
	if (!temp)
		return (NULL);
	temp->str = _strdup(str);
	temp->len = _strlen(str);
	temp->next = NULL;
	if (!*head)
	{
		*head = temp;
		return (temp);
	}
	new = *head;
	while (new->next)
	{
		new = new->next;
	}
	new->next = temp;
	return (new);
}
/**
 * _strdup - Duplicate a string for storing as struct memeber
 * @str: The string to be duplicated
 *
 * Return: The pointer tot duplicated string
 */
char *_strdup(const char *str)
{
	char *s;
	int len = _strlen(str);

	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	while (len >= 0 && str)
	{
		s[len] =  str[len];
		len--;
	}
	if (s)
		return (s);
	return (NULL);
}
/**
 * _strlen - Determine the length of a string
 * @str: Pointer to the string
 *
 * Return: Length of a string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str && str[len])
	{
		len++;
	}
	return (len);
}
