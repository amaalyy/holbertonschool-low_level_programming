#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: node
 * Return: the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
		{
			return (ptr);
		}
		i++;
		ptr = ptr->next;
	}
	return (NULL);
} 
