#include "lists.h"

/**
* listint_len- principal function
* @h: pointer
* Return: date type
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
