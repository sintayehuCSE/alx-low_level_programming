#include "lists.h"
char * _strdup(const char *);
unsigned int _strlen(const char *);
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
