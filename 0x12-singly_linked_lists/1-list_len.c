#include "lists.h"

/**
* list_len - function that prints all the elements of a list
* @h: pointer
* Return: number of the list
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
	{
		h = h->next;
	}
	return (i);
}
