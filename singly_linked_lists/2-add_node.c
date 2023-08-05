#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: ptr to a ptr to the head of the list
 * @str: char
 * Return: pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	if (str == NULL)
		return (NULL);

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
} 
