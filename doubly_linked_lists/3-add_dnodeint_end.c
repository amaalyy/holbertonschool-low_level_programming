#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n:data
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *end;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
	{
		return (NULL);
	}
	end->next = NULL;
	end->n = n;
	if (*head == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	end->prev = ptr;
	ptr->next = end;
	return (end);
}
