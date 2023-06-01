#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number 
 * of elements in a linked list_t list
 * @h: pointer
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
