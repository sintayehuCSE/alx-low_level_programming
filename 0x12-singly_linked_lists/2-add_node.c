#include "lists.h"
char * _strdup(const char *);
unsigned int _strlen(const char *);
size_t print_list(const list_t *h)
{
	size_t num_node = 0;
	const list_t *head = h;

	while (head)
	{
		if (!head->next)
			write(1, "[0] (nil)", 9);
		else
			printf("[%u] %s\n", head->len, head->str);
		head = head->next;
		num_node++;
	}
	return (num_node);
}
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
/**
 * add_node - Add a new node to the beginning of a list
 * @head: Pointer to the list
 * @str: Pointer tot the string value to be stored
 *
 * Return: Pointer to the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(*temp));
	if (!temp)
		return (NULL);
	temp->str = _strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
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
	unsigned int len = _strlen(str);

	s = malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	while (len > 0)
	{
		s[len] =  str[len];
		len--;
	}
	s[len] = str[len];
	return (s);
}
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str && str[len])
	{
		len++;
	}
	return (len);
}
