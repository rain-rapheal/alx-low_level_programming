#include "lists.h"

/**
 * dlistint_len - returns the length of dlist
 * @h: address of the head node 
 *
 * Return: list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
