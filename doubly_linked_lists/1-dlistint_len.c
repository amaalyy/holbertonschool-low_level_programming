#include "lists.h"
/**
 * dlistint_len - num of elements in a list
 * @h: pointer
 * Return: the number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int i;

	ptr = h;
	i = 0;
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return  (i);
}
