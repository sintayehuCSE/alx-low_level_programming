#include "lists.h"
char *_strdup(const char *);
unsigned int _strlen(const char *);
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
