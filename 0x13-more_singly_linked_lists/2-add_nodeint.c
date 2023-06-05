#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to first node
 * @n: value for new node
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nd = malloc(sizeof(listint_t));

	if (!head || !nd)
		return (NULL);
	nd->next = NULL;
	nd->n = n;
	if (*head)
		nd->next = *head;
	*head = nd;
	return (nd);
}
